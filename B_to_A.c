#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d", &a,&b);
    for (x=b; x>=a; x--) printf("%d ", x);
}