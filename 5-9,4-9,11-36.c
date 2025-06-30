#include <stdio.h>

int main()
{
   int n,ans=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       if(i%2)
       ans+=i;
   }
   printf("%d",ans);

    return 0;
}