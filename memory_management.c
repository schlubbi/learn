#include <stdio.h>
#include <stdlib.h>

int main() {
    // just 4 bytes without type information
    void * p = malloc(4);

    int * p = (int *) malloc(4);

    if (!p)
    {
      return 1; // there's no hope! :(
    }

    *p = 42;
    free(p);
    p = 0;

    void * frame = malloc(1415);
    free(frame);
    frame = 0;

    char * message = (char *) malloc(141);
    free(message);
    message = 0;
}
