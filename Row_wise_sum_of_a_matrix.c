#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for(int r=0; r<n;r++)
    {
        for(int c=0; c<m; c++) scanf("%d", &mat[r][c]);
    }
    for(int r=0; r<n;r++)
    {
        int sum=0;
        for(int c=0; c<m; c++) sum+=mat[r][c];
        printf("%d ", sum);
    }
}