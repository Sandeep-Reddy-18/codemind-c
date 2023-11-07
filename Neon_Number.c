#include<stdio.h>
int main()
{
    int original, sum=0;
    scanf("%d", &original);
    int square=original*original;
    while(square>0)
    {
        sum+=square%10;
        square/=10;
    }
    if (sum==original) printf("Neon Number");
    else printf("Not Neon Number");
}