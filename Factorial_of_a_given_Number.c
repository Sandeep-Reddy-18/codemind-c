#include<stdio.h>
int main()
{
    int x, f=1;
    scanf("%d", &x);
    while(x>1)
    {
        f*=x;
        x--;
    }
    printf("%d", f);
}