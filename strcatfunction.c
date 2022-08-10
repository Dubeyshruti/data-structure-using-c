#include<stdio.h>
#include<string.h>
# define max_len 50
void main(){
char s1[max_len],s2[max_len];
int i,j;
printf("enter first string:");
scanf("%s",s1);
printf("enter second string:");
scanf("%s",s2);
i=0;
while(s1[i]!='\0'){
i++;}
j=0;
while(s2[j]!='\0'){
s1[i]=s2[j];
i++;
j++;
}
s1[i]='\0';
printf("concatenated string is:%s",s1);

}