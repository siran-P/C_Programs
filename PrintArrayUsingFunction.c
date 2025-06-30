#include <stdio.h>

void fun(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main()
{
    int arr[5]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    fun(arr,len);

   // return 0;
}
