#include <stdio.h>

int main()
{int x=31,y=14;
    int a=x ^ y;
    int sum=0;
    while(a>0){
        sum+=a%2;
        a/=2;
    }
    printf("%d",sum);

    return 0;
}