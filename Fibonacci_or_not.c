#include<stdio.h>
int main()
{
    int n, i, a=0, b=1, c=a+b;
    scanf("%d", &n);
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
        if(c==n)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}