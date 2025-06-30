#include <stdio.h>
#include<string.h>
struct student{
    char name[9];
 //  int rollNo;
  //  char sec;
    
}s1;
struct mark{
    int m1;
    int m2;
    int m3;
}s2;
int main()
{
   // s1.rollNo=50;
    strcpy(s1.name,"siran");
   // s1.sec='c';
    //printf("%p %p %p\n",&s1.name,&s1.rollNo,&s1.sec);
    s2.m1=30;
    s2.m2=50;
    s2.m3=60;
    printf("%p %p %p",&s2.m1,&s2.m2,&s2.m3);
    printf("\n%d %d",sizeof(s1),sizeof(s2));

    return 0;
}