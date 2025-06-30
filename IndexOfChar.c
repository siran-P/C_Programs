#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    fgets(str,100,stdin);
    scanf("%c",&c);
    printf("%s",str);
    int j=0;
    while(str[j]!='\0')
        j++;
    for(int i=0;i<len;i++){
        if(c==str[i]){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
