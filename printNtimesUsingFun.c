#include <stdio.h>
void fun(int n){
    if(n>0){
        printf("%d Siran\n",n);
        fun(n-1);
    }
}
int main()
{
   fun(500);

    return 0;
}

