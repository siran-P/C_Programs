#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int fn=0,sn=1,ln=fn+sn;
   while(n>=ln){
       fn=sn;
       sn=ln;
       ln=sn+fn;
   }
   if(sn==n)
       printf("fibonacci");
   else
       printf("not fibonacci");
    return 0;
}
