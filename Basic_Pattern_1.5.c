#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d", &n);
    for(c=65; c<n+65; c++)
    {
        for(r=1; r<=n; r++) printf("%c ", c);
        printf("
");
    }
}