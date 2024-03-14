#include <stdio.h>
int main()
{
    int i,j,a[4][4],b[4][4],c[4][4];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter elements for the first matrix index a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter elements for the second matrix index b[%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("FIRST MATRIX\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d                  ",a[i][j]);
        }
        printf("\n");
    }
    printf("SECOND MATRIX\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d                  ",b[i][j]);
        }
        printf("\n");
    }
    printf("SUM OF BOTH MATRICES\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d                  ",c[i][j]);
        }
        printf("\n");
    }
}