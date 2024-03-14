#include <stdio.h>
int main()
{
    int i,j,m,n,x,y;
    printf("enter size of first matrix x*y\n");
    scanf("%d %d",&x,&y);
    printf("enter size of second matrix m*n\n");
    scanf("%d %d",&m,&n);
    int a[x][y],b[m][n],c[x+m][y+n];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Enter elements for the first matrix index a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter elements for the second matrix index b[%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("FIRST MATRIX\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d                  ",a[i][j]);
        }
        printf("\n");
    }
    printf("SECOND MATRIX\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d                  ",b[i][j]);
        }
        printf("\n");
    }
    printf("MULTIPLICATION OF BOTH MATRICES\n");
    for(i=0;i<x+m;i++)
    {
        for(j=0;j<y+n;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d                  ",c[i][j]);
        }
        printf("\n");
    }
}