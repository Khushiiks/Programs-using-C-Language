#include <stdio.h>
int main()
{
    int n,ch,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("1.factorial  2.check whether prime  3.check odd or even  4.exit\n");
    printf("enter a choice 1,2,3 or 4\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: 
    int f=1;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        f=f*i;
        else continue;
    }
    printf("%d",f);
    break;
    case 2:
    int c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if (c==2)
    printf("PRIME NO.:%d",n);
    break;
    case 3:
    if(n%2==0)
    printf("EVEN");
    else 
    printf("ODD");
    break;
    case 4:
    printf("exit");
    break;
    default:
    printf("invalid choice");
    break;
    }
    return 0;
}