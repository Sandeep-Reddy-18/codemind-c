#include<stdio.h>
int main()
{
    int m,n,c=0;
    scanf("%d %d", &m,&n);
    while(m<n)
    {
        if (m%2==0 && m%3==0) c++;
        m++;
    }
    printf("%d", c);
}