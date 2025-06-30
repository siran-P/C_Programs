#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    char rev[len+1];
    int i,j;
    for(i=0,j=len-1;i<len;i++,j--){
        rev[i]=str[j];
    }
    rev[len]='\0';
    if(strcmp(rev,str)==0){
        printf("palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}