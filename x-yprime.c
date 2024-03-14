#include <stdio.h>
int main()
{
    int n,a,b,i,j;
    printf("enter starting limit and end limit\n");
    scanf("%d %d",&a,&b);
    for (i=a;i<=b;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
            else continue;
        }
        if(c==2)
        printf("%d\n",i);
    }
}