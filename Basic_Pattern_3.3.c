#include<stdio.h>
int main()
{
    int n, r,c;
    scanf("%d", &n);
    int temp=n;
    for(c=1; c<=n;c++)
    {
        for(r=1; r<=temp; r++) printf("%d ", r);
        printf("
");
        temp--;
    }
}