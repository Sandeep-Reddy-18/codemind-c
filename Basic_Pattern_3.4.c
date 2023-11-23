#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d", &n);
    int temp=n;
    for(c=64+n; c>=65; c--)
    {
        for(r=1; r<=temp; r++) printf("%c ", c);
        printf("
");
        temp--;
    }
}