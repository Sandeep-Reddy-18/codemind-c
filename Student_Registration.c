#include<stdio.h>
int main()
{
    int t, n, m, k;
    scanf("%d", &t);
    while(t>=1)
    {
        scanf("%d %d %d", &n, &m, &k);
        printf("%s
", (m-k)>=n ? "YES" : "NO");
        t--;
    }
}