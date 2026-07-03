#include<stdio.h>
void main()
{
    int n,x,count=0;
    printf("enter number:");
    scanf("%d",&n);
    for(;n!=0;)
    {
        x=n%10;
        count++;
        n=n/10;
    }
    printf("number of digits :%d",count);
}
