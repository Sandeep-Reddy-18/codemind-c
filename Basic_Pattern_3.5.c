#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int c=n; c>=1; c--)
    {
        for(int r=1; r<=c; r++) printf("%c ", 64+r);
        printf("
");
    }
}