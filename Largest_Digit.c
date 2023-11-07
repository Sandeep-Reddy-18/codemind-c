#include<stdio.h>
int main()
{
    int n, largest=0;
    scanf("%d", &n);
    while(n>0)
    {
        if (n%10 > largest) largest=n%10;
        n/=10;
    }
    printf("%d", largest);
}