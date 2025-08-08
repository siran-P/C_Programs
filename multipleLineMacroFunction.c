#include <stdio.h>
#define MAX(a,b) if(a>b)\
printf("%d is maximum",a);\
else \
printf("%d is maximum",b);

int main()
{
    MAX(5-2,7+1);
   #undef MAX
  //  MAX(5,2); can't use because of undef macro
    return 0;
}
