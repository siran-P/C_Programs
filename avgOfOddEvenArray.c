#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    int odd=0,even=0;
    float osum=0,esum=0;
    for(int i=0;i<n;i++){
        if((int)arr[i]%2){
            odd++;
            osum+=arr[i];
        }
        else{
            even++;
            esum+=arr[i];
        }
    }
    printf("%.2f\n%.2f",esum/even,osum/odd);

    return 0;
}
