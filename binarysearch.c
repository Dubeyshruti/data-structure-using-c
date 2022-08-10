#include<stdio.h>
int main(){
int a[20],i,n,key;
printf("enter size of array:\t");
scanf("%d",&n);
printf("enter ele of the array:\t");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter value to be searched for:");
scanf("%d",&key);
for(i=0;i<n;i++){
if(a[i]==key){
printf("ele found at %d index",i);
return 0;}}
printf("ele not found");}