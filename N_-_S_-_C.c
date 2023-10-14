#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d", &a,&b);
    for(x=a+1;x<b;x++) printf("%d %d %d
", x,x*x,x*x*x);
}