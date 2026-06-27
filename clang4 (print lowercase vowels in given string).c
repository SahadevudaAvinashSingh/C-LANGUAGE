//program to print lowercase vowels in given string.
#include<stdio.h>
void main()
{
    char str[]="hello Good Morning To All Of You.";
    int i;
    printf("Lowercase vowels in given string :");
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                printf("%c ",str[i]);
            }
        }
    }
}
