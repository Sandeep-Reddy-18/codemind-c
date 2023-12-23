#include<stdio.h>
int main()
{
    int n,i,j,exist=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    for(i=0; i<n; i++)
    {
        int found=0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j]) found=1;
        }
        
        if(found) continue;
        
        int c=0;
        for(int j=0; j<n; j++) if(arr[i]==arr[j]) c++;
        if(arr[i]==c){
            exist=1;
            printf("%d ", arr[i]);
        }
    }
    if(!exist) printf("-1");
}