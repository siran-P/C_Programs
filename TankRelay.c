#include <stdio.h>

int main()
{
   int t1,t2;
   scanf("%d%d",&t1,&t2);
   if(t1<=200 && t2<=200){
        printf("Turn off Relay\n");
   }
   else if(t1>200 && t2<200){
       printf("Turn on relay\n");
       for(int i=0;t2<980 && t1>200;i++){
       t2++;
       t1--;
       }
       printf("%d %d\n",t1,t2);
       printf("Turn off Relay\n");
       }
    else{
        printf("Turn off Relay\n");
    }
    return 0;
}