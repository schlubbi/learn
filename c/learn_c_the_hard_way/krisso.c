#include <assert.h>
#include <stdio.h>


int str_len(char *a)
{
  char *it = a;
  while(*it) ++it;
  return (it - a);
}

int equals(char *a, char *b)
{
  for(;*a == *b ; a++,b++){
    if(*a == '\0'){
      return 1;
    }
  }
  return 0;
}

int str_cmp(char *a, char *b)
{
  for(;*a == *b ; a++,b++){
    if(*a == '\0'){
      return 0;
    }
  }
  return *a > *b ? 1 : -1 ;
}

void test_equals()
{
  assert(equals("abc","abc") == 1);
  assert(equals("a", "bcd") == 0);
  assert(equals("", "") == 1);
  assert(equals(" ", " ") == 1);
  assert(equals(" ", "abc ") == 0);
  assert(equals(" ", " abc ") == 0);
}

void test_str_cmp()
{
  assert(str_cmp("","") == 0);
  assert(str_cmp("Hello ","b") == -1);
  assert(str_cmp("Hello","Abc") == 1);

}

int main(int argc, char *argv[])
{
  test_str_cmp();
  test_equals();
  //assert(str_cmp("Hello World","Hello%20World") == 0);
  //assert(str_cmp("Hello ","Hello%20") == 0);
  //assert(str_cmp("  Hello","%20%20Hello") == 0);
  return 0;
}
