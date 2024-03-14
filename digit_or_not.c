#include <stdio.h>
int main()
{
    char n;
    printf("enter a character \n");
    scanf("%c",&n);
    if(n=='1'||n=='2'||n=='3'||n=='4'||n=='5'||n=='6'||n=='7'||n=='8'||n=='9') 
    {
    printf("digit");
    }
    else
    printf("not a digit");
    return 0;
}