#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i=1;
   l1:
       printf("%dx%d=%d\n",i,n,i*n);
       i++;
  if(i>100)  
  goto l1;
    return 0;
}
