#include<stdio.h>
int main()
{
    int n,m,x,flag=0;
    scanf("%d
%d",&n, &m);
    int mat[n][m];
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++) scanf("%d", &mat[r][c]);
    }
    scanf("%d", &x);
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++) if(x==mat[r][c]) flag=1;
    }
    printf("%d",flag);
}