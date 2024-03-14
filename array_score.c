#include <stdio.h>
int main()
{
    int a[20],c=0,s=0,avg,i;
    for (i=0;i<20;i++)
    {
        printf("enter next marks\n");
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    for(i=0;i<20;i++)
    {
        avg=s/20;
        if(a[i]>89)
        c++;
    }
        printf("avg=%d",avg);
        printf("\nno. of students who scored O Grade=%d",c);
}