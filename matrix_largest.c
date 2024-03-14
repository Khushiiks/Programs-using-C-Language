#include <stdio.h>
int main()
{
    int i,j,a[5][5],max=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("enter element for a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d           ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
    }
    printf("LARGEST NO. IN THE MATRIX:%d",max);

}