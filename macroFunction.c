#include <stdio.h>
#define MUL(a,b) a*b
#define SUM(a,b) a+b
#define DIFF(a,b) a-b
int main()
{
    printf("%d\n",MUL(5-2,7+4));//5-2*7+4
    printf("%d\n",SUM(5-2,7+4));//5-2+7+4
    printf("%d",DIFF(5-2,7+4));//5-2-7+4
    return 0;
}
