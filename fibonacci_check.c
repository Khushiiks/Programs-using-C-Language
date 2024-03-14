#include <stdio.h>
#include <math.h>
  int isPerfectSquare(int x)
    {
       int s = (int)sqrt(x); 
       return (s*s == x);
     }  
   int isFibonacci(int x)
      {
         return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
     }
    int main(void)
    {   
	 int n ;
     printf("enter no.\n");
     scanf("%d",&n);
	  if (n>0)
		{	
		 printf("Is %d a Fibonacci number? %d\n",n, isFibonacci(n));
         if (isFibonacci(n)>0)
         printf("%d in fibonacci series",n);
         else
        printf("%d not in fibonacci series",n);
		} 
		return 0;        
   }