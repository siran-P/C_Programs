#include <stdio.h>
#include<string.h>
int main()
{
   char *str,*res;
   scanf("%s",str);
   int n=strlen(str);
   int c=0,j=0;
   for(int i=0;i<n;i++){
       if(str[i]!='x'&& str[i]!='X')
       {
          res[j]=str[i]; 
          j++;
       }
   }
   for(int i=0;i<n;i++){
       if(str[i]=='x' || str[i]=='X')
       {
          res[j]=str[i]; 
          j++;
       }
   }
   res[j]='\0';
printf("%s",res);
    return 0;
}