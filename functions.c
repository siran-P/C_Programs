#include <stdio.h>
void sum(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}
void sub(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a-b);
}
void mul(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a*b);
}
void division(){
    float a,b;
    scanf("%f%f",&a,&b);
    printf("%f ",a/b);
}
int main()
{
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
            sum();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            division();
            break;
        default:
            printf("Invalid");
    }
    return 0;
}
