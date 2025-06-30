#include <stdio.h>
#include<string.h>
int string_to_number(const char *src) {
  int num=0,c=0;
  for(int i=0;src[i]!='\0';i++){
    int n=(int)src[i]-48;
    if(n<0){
     c++;
    }else
    num=num*10+n;
  }
  if(c>0)num=-num;
  return num;
}

int main()
{
    int a=string_to_number("-75");
    int y=atoi("-75");
    printf("%d %d",y,a);
    return 0;
}
