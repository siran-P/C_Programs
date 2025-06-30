#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,d=1;
    scanf("%d",&n);
    for(int i=-n+1;i<n;i++){
        for(int j=abs(i);j>=1;j--)
            printf(" ");
        for(int k=1;k<=d;k++){
            if(k==1 || k==d)
            printf("*");
            else
            printf(" ");
        }
        if(i<0)
            d+=2;
        else
            d-=2;
       printf("\n");
    }
}