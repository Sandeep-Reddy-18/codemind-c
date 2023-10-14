#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d", &n);
    for (x=1;x<=12;x++)
    {
        printf("%d x %d = %d
", n,x,x*n);
    }
}