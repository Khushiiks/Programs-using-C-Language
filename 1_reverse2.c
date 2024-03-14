#include <stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter no. of rows\n");
    scanf("%d",&n);
    printf("enter no. of columns\n");
    scanf("%d",&m);
    int a[n][m],b[n][m],y;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("enter elements for index a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("ORIGINAL MATRIX:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        y=m;
        for(j=0;j<m;j++)
        {
            b[i][--y]=a[i][j];
        }
    }
    printf("REVERSE:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}