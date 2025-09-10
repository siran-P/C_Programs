#include <stdio.h>
#include<string.h>
 
int catchTheif(char arr[],int k){
    int n=strlen(arr);
    int c=0;
    char a='1';
    for(int i=0;i<n;i++){
        if(arr[i]=='P'){
            int l,h;
            if(i-k>=0)
                l=i-k;
            else
                l=0;
            if(i+k<n)
                h=i+k;
            else
                h=n-1;
            for(int j=l;j<=h;j++){
                if(arr[j]=='T'){
                    arr[j]=a;
                    arr[i]=a++;
                    c++;
                    break;
                }
            }
        }
    }
    return c;
}
int main()
{
    char arr[]={'P','P','P','T','T','T'};
    int k=2;
    printf("%d %s",catchTheif(arr,k),arr);
    return 0;
}
