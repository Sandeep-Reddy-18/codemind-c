#include<stdio.h>
int main() {
    int n,sum=0,c=0, avg;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    for(int i=0; i<n;i++) sum+=arr[i];
    avg=sum/n;
    for(int i=0;i<n;i++) if(arr[i]<=avg) c++;
    printf("%d", c);
    
}