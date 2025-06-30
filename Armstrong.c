#include <stdio.h>
#include<math.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int n1=n,n2=n,c=0;
    while(n1>0){
        c++;
        n1/=10;
    }
    while(n2>0){
       int r=n2%10;
        sum=sum+pow(r,c);
        n2/=10;
    }
    if(n==sum){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }

    return 0;
}