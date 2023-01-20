#include <stdio.h>
int fib(int);
//vs code test
//why cant i make main void 
int main(void) {
  
  
  int f;
  //The initial declaration of variables is kinda wacky
  printf( "Enter an integer to get the nth fibonacci number: ");
  scanf ("%d",&f);
  printf("%d",fib(f));
  //scanf takes the intial arg which specifies what type is accepted, and the second arg assigns the input to a variable/memory location
  //& returns the memory location, and scan f only takes the memory location not the variable itself
  //kinda wierd
  //https://www.geeksforgeeks.org/scanf-in-c/ this website is useful for all the percentage stuff
 
  
  return 0;
}
int fib(int x) {
  int a;
  int b;
  int num;
  int fn;
  int n;
  num = x;
  a = 0;
  b = 1;
  
  if (num == 1) {
    printf("%d",0);
    //"%d" casts the second arg to a string or sumthin idk
}
  else if (num == 2){
    printf("%d",1);
  }
  else{
    fn = 0;
    n = num-1;
    //why is it ++i instead of i++
    for(int i = 0; i < n-1; ++i)
    {
      fn = a + b;
      a = b;
      b = fn;
    }
  }
  
  return fn;
}