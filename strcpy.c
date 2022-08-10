#include<stdio.h>
#include<string.h>
#define max_len 50


void main(){
char s1[max_len],s2[max_len];
char *str1=s1;
char *str2=s2;
printf("enter string:");
scanf("%s",s1);
while(*(str2++)=*(str1++));
printf("entered string is:%s",s1);
printf("\n copied string is:%s",s2);

}