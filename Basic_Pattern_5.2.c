#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int c=1; c<=n; c++)
    {
        for(int r=1; r<=n; r++)
        {
            if(r<=c) printf("%d",r);
            else printf("*");
        }
        printf("
");
    }
}