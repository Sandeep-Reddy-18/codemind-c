#include<stdio.h>
int main()
{
    int n,c,r;
    scanf("%d", &n);
    for(c=n; c>=1; c--)
    {
        for(r=c; r<=n; r++) printf("%d ", r);
        printf("
");
    }
}