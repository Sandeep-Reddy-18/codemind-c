#include<stdio.h>
int main()
{
    int n,a,b,x;
    scanf("%d %d %d", &n, &a, &b);
    for (x=a; x<=b; x++)
    {
        printf("%d x %d = %d
", n,x,n*x);
    }
}