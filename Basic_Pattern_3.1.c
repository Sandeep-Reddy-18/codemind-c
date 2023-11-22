#include<stdio.h>
int main()
{
    int n, c, r;
    scanf("%d", &n);
    for(c=n; c>=1; c--)
    {
        for(r=1; r<=c; r++) printf("* ");
        printf("
");
    }
}