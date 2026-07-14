//PROGRAM TO FIND THE FACTORIAL OF GIVEN NUMBER USING FUNCTIONS.
#include<stdio.h>
int fact(int);
void main()
{
    int n,z;
    printf("enter number to find factorial:");
    scanf("%d",&n);
    z=fact(n);
    printf("factorial is:%d",z);
}
int fact(int n)
{
    int i,f=1;
    for(i=n;i>=1;i--)
    {
        f*=i;
    }
    return f;
}
