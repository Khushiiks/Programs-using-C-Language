#include <stdio.h>
int main()
{
    int t,i,c=0,j,n;
    printf("enter no. of rows and columns\n");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element for [%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("ORIGINAL ARRAY:\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",b[i][j]);
            }
            printf("\n");
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=b[j][i];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=b[i][j])
                c++;
                
            }
        }
            if(c==0)
            printf("symmetric");
            else 
            printf("not symmetric");
}