#include<stdio.h>
void main(){
char s1[100],s2[50];
printf("enter first string:");
scanf("%s",s1);
printf("enter second string:");
scanf("%s",s2);
char *a=s1;
char *b=s2;
while(*a){
a++;}
while(*b){
*a=*b;
b++;
a++;}
*a='\0';
printf("string concatenated is:%s",s1);
}