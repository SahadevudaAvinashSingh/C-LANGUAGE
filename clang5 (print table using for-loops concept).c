//program to print table of a given number...
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter number for table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
}
