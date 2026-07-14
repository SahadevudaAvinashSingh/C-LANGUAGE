#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,count=0;
    printf("Enter string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            count++;
        }
    }
    printf("No.of numbers= %d",count);
}
