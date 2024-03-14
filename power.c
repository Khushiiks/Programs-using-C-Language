#include <stdio.h>
#include <math.h>
int power();
int main()
{
    int n,b,p;
    printf("enter no.\n");
    scanf("%d",&n);
    printf("enter exponent\n");
    scanf("%d",&b);
    p=power(n,b);
    printf("%d^%d=%d",n,b,p);
    return 0;
}
int power(int a,int k)
{
    int i;
    i=pow(a,k);
    return i;
}