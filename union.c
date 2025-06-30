#include <stdio.h>
#include<string.h>
union student{
    char name[20];
    int rollNo;
    char sec;
    
}s1;
union mark{
    int m1;
    int m2;
    int m3;
}s2;
int main()
{
    s1.rollNo=50;
    strcpy(s1.name,"siran");
    s1.sec='c';
    printf("%p %p %p\n",&s1.name,&s1.rollNo,&s1.sec);
    s2.(30,50,60);
   // s2.m2=50;
    //s2.m3=60;
    printf("%p %p %p",&s2.m1,&s2.m2,&s2.m3);
    printf("\n%d %d",sizeof(s1),sizeof(s2));

    return 0;
}