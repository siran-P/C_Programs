#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int n=num,rev=0;;
    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    if(num==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}