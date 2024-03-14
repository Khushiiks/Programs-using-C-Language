#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,a[10],b[10];
    float d,s=0.0,c[9];
    for(i=0;i<10;i++)
    {
        printf("enter x%d,y%d\n",i+1,i+1);
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("(x%d,y%d)=(%d,%d)\n",i+1,i+1,a[i],b[i]);
    }
    for(i=0;i<9;i++)
    {
        d=sqrt((pow((b[i+1]-b[i]),2))+(pow((a[i+1]-a[i]),2)));
        c[i]=d;
    }
    for(i=0;i<9;i++)
    {
        s=s+c[i];
        printf("distance between (x%d,y%d) and (x%d,y%d)= %f  units\n",i,i,i+1,i+1,c[i]);
    }
    printf("distance between point 1 and 2=%f units",s);
}