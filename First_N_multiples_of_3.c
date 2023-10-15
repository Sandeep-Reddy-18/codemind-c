#include<stdio.h>
int main()
{
    int a=1,n,c=0;
    scanf("%d", &n);
    while(c<n)
    {
        if(a%3==0)
        {printf("%d ", a);c++;}
        a++;
    }
}