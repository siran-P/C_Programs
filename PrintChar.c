#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    for(int i=0;i<n;i++){
        if((arr[i]>='a' && arr[i]<='z' )|| (arr[i]>='A' && arr[i]<= 'Z' )){
            printf("%c",arr[i]);
        }
    }
    return 0;
}