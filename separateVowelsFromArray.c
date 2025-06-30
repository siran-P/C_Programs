#include <stdio.h>
#include<string.h>
int main()
{
   char *s,*vowel;
   scanf("%s",s);
   int len=strlen(s),j=-1;
   for(int i=0;i<len;i++){
       
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
          j++;
          vowel[j]=s[i];
           
       }
   }
   vowel[j+1]='\0';
       printf("%s",vowel);

    return 0;
}




#include <string.h>

#define VOWELS "aeiou"
size_t get_count(const char *s)
{
    int count = 0;
    for (; *s != '\0'; s++)
        if (strchr(VOWELS, *s) != NULL) count++;
    return (count);
}