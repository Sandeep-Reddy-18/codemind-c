#include<stdio.h>
int main()
{
    int a,x,s=0;
    scanf("%d",&a);
    for(x=1;x<a;x++) if(a%x==0) s+=x;
    printf("%d",s);
}