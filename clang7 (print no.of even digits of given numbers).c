#include<stdio.h>
void main()
{
    int n,x,even=0;
    printf("enter number:");
    scanf("%d",&n);
    for(;n!=0;)
    {
        x=n%10;
        if(x%2==0)
        {
            even++;
        }
        n=n/10;
    }
    printf("number of even digits:%d",even);
}

