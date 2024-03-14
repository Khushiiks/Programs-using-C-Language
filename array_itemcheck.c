#include <stdio.h>
int main()
{
    int pos,i,n,a[10];
    printf("Enter an item to check whether it is present in array \n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        printf("enter next item\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if (n==a[i])
        {
        pos=i+1;
        break;
        }
        else continue;
    }
    printf("position of item:%d",pos);
}