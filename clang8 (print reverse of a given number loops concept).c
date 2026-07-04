#include<stdio.h>
void main()
{
    int x,n;
    printf("enter number to reverse:");
    scanf("%d",&n);
    printf("Reverse of the given number is:");
    for(;n!=0;)
    {
        x=n%10;
        printf("%d",x);
        n=n/10;
    }
}
