/*Série de Fibonacci*/


#include <stdio.h>

int main()
{
   int num = 1000;
   int calc;
   int fib[2] = { 0, 1 }; 
   int i;

   for(i = 0; i < num; i++) {
      calc = fib[0] + fib[1];
      fib[0] = fib[1];
      fib[1] = calc;

      printf("Fibonacci: %d = %d\n", i, fib[0]);
   }
   
   return 0;
}