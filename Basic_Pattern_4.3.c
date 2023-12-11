#include<stdio.h>
int main()
{
    int n, d=1;
    scanf("%d", &n);
    
    for(int c=1; c<=n; c++)
    {
        for(int r=1; r<=n; r++)
        {
            printf("%d ", d);
            if(d==1) d=0;
            else d=1;
        }
        d=1;
        printf("
");
    }
}