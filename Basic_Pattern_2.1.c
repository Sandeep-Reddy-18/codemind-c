#include<stdio.h>
int main()
{
    int n, c, r;
    scanf("%d", &n);
    for(c=1; c<=n; c++)
    {
        for(r=1; r<=c; r++) printf("* ");
        printf("
");
    }
}