#include <stdio.h>

int main()
{
    int n,c=0,x=100;
    scanf("%d",&n);
    for(int i=0;c<n;i++)//0 to n-1
    {  
        int p=0;
        for(int j=2;j<x/2;j++)
        {
            if(x%j==0){
                p++;
                break;
            }
        }
        if(p==0){
            c++;
            printf("%d ",x);
        }
        x++;
    }

    return 0;
}
