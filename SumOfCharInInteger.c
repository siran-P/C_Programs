/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    int len=strlen(arr);
    int sum=0;
    for(int i=0;i<len;i++){
        if(arr[i]>='0' && arr[i]<='9'){
            sum+=(int)arr[i]-48;
        }
    }
    printf("%d",sum);

    return 0;
}
