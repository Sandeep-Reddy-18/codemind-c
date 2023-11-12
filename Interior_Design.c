#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, f, s;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    f=x1+y1;
    s=x2+y2;
    if (f<s) printf("%d", f);
    else printf("%d", s);
}