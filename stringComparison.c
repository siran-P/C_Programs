#include <stdio.h>
int stringComparsion(char s1[], char s2[]) {
    int i;
    for( i=0;s1[i]!='\0' && s2[i]!='\0';i++){
        if(s1[i]>s2[i]){
            return 1;
        }
        else if(s1[i]<s2[i]){
            return -1;
        }
    }
    if(s1[i]==s2[i])
        return 0;
    else if(s1[i]==0){
        return -1;
    }
    else{
        return 1;
    }
}
int main()
{
    char str1[]="string";
    char str2[]="string2";
    printf("%d",stringComparsion(str1,str2));
    return 0;
}
