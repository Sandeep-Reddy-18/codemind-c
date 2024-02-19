#include<stdio.h>
int main(){
int n,a,b,max =- 1;
scanf("%d", &n);
int arr[n];
for(int i=0;i<n;i++) scanf("%d", &arr[i]);
scanf("%d %d", &a, &b);
for(int i=0;i<n;i++) if(arr[i]<a||arr[i]>b) max=(arr[i]>max) ? arr[i] : max;
printf("%d", max); }