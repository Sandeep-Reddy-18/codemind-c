#include<stdio.h>
int main()
{
    int n, exist=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    int min=arr[0], max=arr[0];
    
    for(int i=0;i<n;i++)
    {
        int found=0;
        for(int j=0;j<i;j++) if(arr[i]==arr[j]) found=1;
        if(found) continue;
        int c=0;
        for(int j=0; j<n; j++) if(arr[i] == arr[j]) c++;
        if(arr[i] == c)
        {
            exist=1;
            max=(arr[i]>max) ? arr[i] : max;
            min=(arr[i]<min) ? arr[i] : min;
        }
    }
    if(exist) printf("%d %d", min, max);
    else printf("-1");
}