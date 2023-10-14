#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d", &a, &b);
    for (x=1; x<=b; x++)
    {
        printf("%d x %d = %d
", a,x,a*x);
    }
}