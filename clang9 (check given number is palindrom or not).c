//program to check the given user entered number is Palindrom or not using for loops concept.
#include<stdio.h>
void main()
{
    int x,n,rev=0,num;
    printf("Enter number to check:");
    scanf("%d",&n);
    num=n;
    for(;n!=0;)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    if(rev==num)
    {
        printf("given number is PALINDROM...");
    }
    else
    {
        printf("given number is not a Palindrom...");
    }
}
