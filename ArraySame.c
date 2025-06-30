#include <stdio.h>

int main()
{
    int n1=1,n2=1;
    int arr1[n1],arr2[n2];
    printf("Enter array 1:");
    while(1){
        int n;
        scanf("%d",&n);
        if(n<0){
            break;
        }
        arr1[n1-1]=n;
        n1++;
    }
    printf("Enter array 2");
    while(1){
        int n;
        scanf("%d",&n);
        if(n<0){
            break;
        }
        arr2[n2-1]=n;
        n2++;
    }
    for(int i=0;i<n1-1;i++)
        printf("%d %d\n",arr1[i],arr2[i]);
    printf("%d %d\n",n1,n2);
    if(n1==n2){
        for(int i=0;i<n1-1;i++){
            if(arr1[i]!=arr2[i])
            {
                printf("Not same array");
                return 0;
            }
        }
        printf("same array");
    }
    else{
        printf("Not same array");
    }

    return 0;
}