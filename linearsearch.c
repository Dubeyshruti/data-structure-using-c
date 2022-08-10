#include<stdio.h>
int main(){
int a[10];
int i,x,n;
printf("enter no. of ele\t");
scanf("%d",&n);
printf("enter array ele\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter ele to be searched for:\t");
scanf("%d",&x);
for(i=0;i<n;++i)
if(a[i]==x)
break;
if(i<n)
printf("ele found at: %d index",i);
else
printf("ele not found");
return 0;
}