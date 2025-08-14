#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    char *res=malloc(1000);
    res[0]='\0';
    char r[13][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int n[13]={ 1  ,4,   5,  9,  10,  40, 50, 90,  100, 400, 500,900,1000};
    for(int i=12;i>=0;i--){
        while(num>=n[i]){
            strcat(res,r[i]);
            //printf("%s",r[i]);
            num-=n[i];
        }
    }
    printf("\n%s",res);
    return 0;
}
