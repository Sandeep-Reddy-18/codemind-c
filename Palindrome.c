#include<stdio.h>
int main()
{
    int n, nn, rev=0;
    scanf("%d", &n);
    nn = n;
    while (n>0)
    {
        rev = (rev*10) + n%10;
        n=n/10;
    }
    if (rev == nn) printf("True");
    else printf("False");
}