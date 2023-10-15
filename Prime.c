#include<stdio.h>
int main()
{
    int n,x,c=0;
    scanf("%d", &n);
    for(x=1;x<=n;x++)
    {
        if (n%x==0) c++;
    }
    //printf("%d", c);
    if(c==2) printf("Prime");
    else printf("Not Prime");
}