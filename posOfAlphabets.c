#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
       printf("%d",ch-64);
    else if(ch>='a' && ch<='z')
       printf("%d",ch-96);
    else
       printf("Enter a to z or A to Z");

    return 0;
}