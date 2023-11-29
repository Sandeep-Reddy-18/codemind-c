#include<stdio.h>
int main()
{
    int n,x=1;
    scanf("%d", &n);
    for(int c=1; c<=n; c++)
    {
        for(int r=1; r<=n; r++) printf("%d ", x);
        printf("
");
        x=(x==0) ? 1 : 0;
    }
}