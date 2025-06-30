#include<stdio.h>
int main()
{
    int n,co=0,ce=0;
    printf("Enter size :");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2){
        co++;
    }
    else{
        ce++;
    }
    }
     int odd[co];
    int even[ce];
     
    int j=0,k=0;
for(int i=0;i<n;i++){
    
    if(arr[i]%2==1){
        odd[j]=arr[i];
        j++;
    }
    else{
        even[k]=arr[i];
        k++;
    }
}
for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    
printf("\n%d  %d \n",co,ce);
printf("\nodd array\n");
for(int i=0;i<co;i++){
    printf("%d->%d ",i,odd[i]);
}
printf("\neven array\n");
for(int i=0;i<ce;i++){
    printf("%d->%d ",i,even[i]);
}
    return 0;
}
