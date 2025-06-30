#include <stdio.h>

int main()
{
    int amt,c500,c200,c100,c50;
    scanf("%d",&amt);//amt=2050;
        if(amt%50>0)
{
      printf("\ninvalid to take %d",amt);
      return 0;
}
    int a=amt;//a=2050
    c500=a/500;//4
    a-=c500*500;//
    c200=a/200;
    a-=c200*200;
    c100=a/100;
    a-=c100*100;
    c50=a/50;
    a-=c50*50;

if(c500)
{
    printf("%dx500",c500);
}
if(c200)
{
      printf("\n%dx200",c200);
    
}
if(c100){
      printf("\n%dx100",c100);
}
if(c50){
      printf("\n%dx50",c50);
}
    return 0;
}
