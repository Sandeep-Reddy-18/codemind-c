#include<stdio.h>
int main() {
    int n,even=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i]%2!=0) even=0;
    }
    if(even) printf("True");
    else printf("False");
}