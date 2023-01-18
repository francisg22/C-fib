#include <stdio.h>

int main(void) {
  int a;
  int b;
  int num;
  int fn;
  int n;
  num = 5;
  a = 0;
  b = 1;
  if (num == 1) {
    printf("%d",0);
}
  else if (num == 2){
    printf("%d",1);
  }
  else{
    fn = 0;
    n = num-1;
    for(int i = 0; i < n-1; ++i)
    {
      fn = a + b;
      a = b;
      b = fn;
    }
  }
  
  printf("%d",fn);
  return 0;
}