#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int Basic(int i)
{
  return i != 6 ? i : -1;
  //return i;
}

int Feature1(int i)
{
  //return 2*i;
  return i != 5 ? 2*i : -1;
}


int main()
{
  int ret = 0;
  for (int i = 1; i <= 10; ++i){

    // Test basic functionality
    if (Basic(i) == i)
    {
      printf("**** PASS: Func1 with input %d\n", i);
    }
    else
    {
      printf("**** FAILED: Func1 with input %d\n", i);
      ret = -1;
    }

    // Test feature1
    if (Feature1(i) == 2*i){
      printf("**** PASS: Feature1 with input %d\n", i);
    } else {
      printf("**** FAILED: Feature1 with input %d\n", i);
      ret = -1;
    }
  }

  return ret;
}
