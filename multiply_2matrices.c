#include <stdio.h>
int main()
{
    int i,j,m,n,x,y,x1,y1,s,m1,n1;
    printf("enter size of first matrix x*y\n");
    scanf("%d %d",&x,&y);
    printf("enter size of second matrix m*n\n");
    scanf("%d %d",&m,&n);
    int a[x][y],b[m][n],k,l;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Enter a[%d][%d]:\n",i,j);
            scanf("%d",&*(*(a+i)+j));
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter b[%d][%d]:\n",i,j);
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
    if ((m==y)&&(n==x))
    {
        if(x>m)
        {
            x1=x;
            m1=m;
        }
        else 
        {
            x1=m;
            m1=x;
        }
        if(y>n)
        {
            y1=y;
            n1=n;
        }
        else
        {
            y1=n;
            n1=y;
        }
    int c[x1][y1];
    
    printf("MULTIPLICATION OF BOTH MATRICES\n");
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y1;j++)
        {
            s=0;
            for(k=0;k<y1;k++)
            {
                l=(a[i][k]*b[k][j]);
                s=s+l;
            }
            c[i][j]=s;
        }
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d                  ",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("MATRICES CANNOT BE MULTIPLIED");
}