#include<stdio.h>
void main()
{
    char str[20];
    int i;
    printf("enter string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'||str[i]>='0'&&str[i]<='9')
        {
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
