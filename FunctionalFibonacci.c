#include <stdio.h>
void fibonacci(int n){
    int a=0,b=1;
    if(n==1)printf("%d",a);
    else if(n==2)printf("%d,%d",a,b);
    else{
        printf("%d,%d",a,b);
        int c=a+b;
    for(int i=2;i<n;i++){
        printf(",%d",c);
        a=b;b=c;c=a+b;
    }
    }
    printf("\n");
    
}
int main()
{
    fibonacci(5);
    fibonacci(10);
    return 0;
}
