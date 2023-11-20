#include<stdio.h>
int main()
{
    int n, r,c ;
    scanf("%d", &n);
    for(c=1; c<=n; c++)
    {
        for(r=65; r<65+c; r++) printf("%c ", r);
        printf("
");
    }
}