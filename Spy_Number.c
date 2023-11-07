#include<stdio.h>
int main()
{
    int n, sum=0, product=1;
    scanf("%d", &n);
    while(n>0)
    {
        sum+=n%10;
        product*=n%10;
        n=n/10;
    }
    if (sum==product) printf("Spy Number");
    else printf("Not Spy Number");
}