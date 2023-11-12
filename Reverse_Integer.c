#include<stdio.h>
int main()
{
    int n, negative=0, rev=0;
    scanf("%d", &n);
    if(n<0)
    {
        negative=1;
        n*=-1;
    }
    while(n>0)
    {
        rev = rev*10+(n%10);
        n/=10;
    }
    if(negative==1) rev*=-1;
    printf("%d", rev);
}