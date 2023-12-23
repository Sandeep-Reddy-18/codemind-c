#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++) scanf("%d",&arr[i]);
    
    for(i=0, j=n-1; i<n/2; i++,j--) printf("%d %d ", arr[i],arr[j]);
    
    if(n%2!=0) printf("%d 0", arr[n/2]);
}