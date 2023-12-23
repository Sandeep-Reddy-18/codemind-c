#include<stdio.h>
int main()
{
    int n,m,sum_e=0,sum_o=0;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++) scanf("%d", &mat[r][c]);
    }
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++)
        {
            if(mat[r][c]%2==0) sum_e+=mat[r][c];
            else sum_o+=mat[r][c];
        }
    }
    printf("%d %d", sum_e, sum_o);
}