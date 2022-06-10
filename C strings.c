#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
 char sentence [100];
 int length,a,vow=0,con=0;
 printf("input a sentence:");
 gets(sentence);
 a=0;
 while (sentence[a]!='\0'){
 if (sentence[a]=='a'|| sentence[a]=='e'||sentence[a]=='i'||sentence[a]=='o'||sentence[a]=='u')
 sentence[a]=sentence[a]-32;
 a++;
 if (sentence[a]=='a'|| sentence[a]=='e'||sentence[a]=='i'||sentence[a]=='o'||sentence[a]=='u')
    vow=vow+1;
    else
    con=con+1;



 }
 printf("string converted:");
 puts(sentence);
 length=strlen(sentence);
 printf("string length:%d",length);

 printf("\nvowels:%d",vow);
 printf("\nconsonant:%d",con);












    return 0;
}




































    