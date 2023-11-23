#include<stdio.h>
int main()
{
    int n, r, c;
    scanf("%d", &n);
    int temp=n;
    for(c=1; c<=n; c++)
    {
        for(r=temp; r>=1; r--) printf("%d ", c);
        printf("
");
        temp--;
    }
}