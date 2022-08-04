#include<stdio.h>
#include<stdlib.h>
void bubblesort(int N[],int n){
int i,temp,swap=1;
for(;swap;n--){
swap=0;
for(i=0;i<n;i++){
if(N[i]>N[i+1]){
temp=N[i];
N[i]=N[i+1];
N[i+1]=temp;
swap++;
}}}}
int main(){
int n,*ar,i;
printf("enter no. of ele=");
scanf("%d",&n);
ar=(int*)calloc(n,sizeof(int));
printf("enter values=");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
bubblesort(ar,n);
for(i=0;i<n;i++)
printf("sorted ar is:%d",*(ar+i));
return 0;
}