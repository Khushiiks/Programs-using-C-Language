#include <stdio.h>
int main()
{
    int n,a,s=0,d;
    printf("enter a no.\n");
    scanf("%d",&a);
    n=a;
    do
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    while(n>0);
    {
        if(s==a)
        {
        printf("pallindrome");
        }
        else
        printf("not pallindrome");
    }
}