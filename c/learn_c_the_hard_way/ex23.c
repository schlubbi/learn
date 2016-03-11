#include <stdio.h>
#include <string.h>
#include "dbg.h"

int normal_copy(char *from, char *to, int count)
{
  int i = 0;

  for(i = 0; i < count; i++){
    to[i] = from[i];
  }

  return i;
}

int duffs_device(char *from, char *to, int count)
{
  {
    int n = (count + 7) / 8;

    switch(count % 8) {
      case 0: do {
                log_info("0");
                *to++ = *from++;
                case 7:
                  log_info("7");
                  *to++ = *from++;
                case 6:
                  log_info("6");
                  *to++ = *from++;
                case 5:
                  log_info("5");
                  *to++ = *from++;
                case 4:
                  log_info("4");
                  *to++ = *from++;
                case 3:
                  log_info("3");
                  *to++ = *from++;
                case 2:
                  log_info("2");
                  *to++ = *from++;
                case 1:
                  log_info("1");
                  *to++ = *from++;
              } while (--n > 0);
    }
  }

  return count;
}

int zeds_device(char *from, char *to, int count)
{
  {
    int n = (count + 7) / 8;

    switch(count % 8) {
      case 0:
      again: *to++ = *from++;

      case 7: *to++ = *from++;
      case 6: *to++ = *from++;
      case 5: *to++ = *from++;
      case 4: *to++ = *from++;
      case 3: *to++ = *from++;
      case 2: *to++ = *from++;
      case 1: *to++ = *from++;
              if(--n > 0) goto again;
    }
  }

  return count;
}

int valid_copy(char *data, int count, char expects)
{
  int i = 0;
  for(i = 0; i < count; i++) {
    if(data[i] != expects) {
      log_err("[%d] %c != %c}", i, data[i], expects);
      return 0;
    }
  }

  return 1;
}

int main(int argc, char *argv[])
{
  char from[3] = { 'a' };
  char to[3] = { 'c' };
  int rc = 0;

  // setup the from to have some stuff
  memset(from, 'x', 3);
  // set it to a failure mode
  memset(to, 'y', 3);
  check(valid_copy(to, 3, 'y'), "Not initialized right.");

  // use normal copy to
  rc = normal_copy(from, to, 3);
  check(rc == 3, "Normal copy failed: %d", rc);
  check(valid_copy(to, 3, 'x'), "Normal copy failed.");

  // reset
  memset(to, 'y', 3);

  // duffs version
  rc = duffs_device(from, to, 3);
  check(rc = 3, "Duff's device failed: %d", rc);
  check(valid_copy(to, 3, 'x'), "Duff's device failed copy.");

  // reset
  memset(to, 'y', 3);


  // my version
  rc = zeds_device(from, to, 3);
  check(rc == 3, "Zed's device failed: %d", rc);
  check(valid_copy(to, 3, 'x'), "Zed's device failed copy.");

  return 0;
error:
  return 1;
}
