#include <stdio.h>

int main()
{  int hr,min,,sec,k=0;
    scanf("%d%d%d",&hr,&min);
    int i=hr;
    int j=min;
    while(1){
      
for(;i<=12;i++){
  for(;j<60;j++){
    for(;k<60;k++){
      printf("%2.2d:",i);
      printf("%2.2d:",j);
      printf("%2.2d",k);
      sleep(1);
    }
    k=0;
  }
  j=0;
}
i=1;
}
}