#include <stdio.h>

int main(void) {
  int a;
  int b;
  int num;
  int fn;
  int n;
  char c[50];
  int f;
  printf( "Enter an integer to get the nth fibonacci number: ");
  scanf ("%d",&f);
  num = f;
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