#include <stdio.h>
int sum(int a,int b,int c);
void main()
{
    
    int a,b,c,s;
    printf("input 3 nos.\n");
    scanf("%d%d%d",&a,&b,&c);
    s=sum(a,b,c);
    printf("%d+%d+%d=%d",a,b,c,s);
    return 0;
}
int sum(int a,int b,int c)
{
    int t;
    t=a+b+c;
    return (t);
}