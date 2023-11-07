#include<stdio.h>
int main()
{
    int x,y,sumx=0, sumy=0, i, j;
    scanf("%d
%d", &x, &y);
    for(i=1; i<=x/2; i++)
    {
        if (x%i==0) sumx+=i;
    }
    for(j=1; j<=y/2; j++)
    {
        if (y%j==0) sumy+=j;
    }

    if (sumx==y && sumy==x) printf("Amicable");
    else printf("Not Amicable");
}