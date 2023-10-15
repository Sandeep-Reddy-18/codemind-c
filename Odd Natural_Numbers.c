#include<stdio.h>
int main()
{
    int a,x;
    scanf("%d", &a);
    for(x=1;x<=a;x++) if(x%2!=0) printf("%d ", x);
}