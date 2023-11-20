#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d", &n);
    for(c=1; c<=n; c++)
    {
        for(r=1; r<=n; r++) printf("%d ", r);
        printf("
");
    }
}