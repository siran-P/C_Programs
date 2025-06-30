#include <stdio.h>

int main()
{
   int a=10;
   int *ptr;
   ptr=&a;
   int **p;
   p=&ptr;
   printf("%i %p %u",a,ptr,**p);

    return 0;
}
