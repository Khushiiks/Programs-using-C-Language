#include <stdio.h>
int main()
{
    int b[3][4],a[3][4],i,j,n;
    printf("enter a no. to multiply with the matrix\n");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter no. for a[%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("ORIGINAL ARRAY:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d            ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=b[i][j]*n;
        }
    }
    printf("MATRIX MULTIPLIED BY %d\n",n);
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d            ",a[i][j]);
        }
        printf("\n");
    }

}