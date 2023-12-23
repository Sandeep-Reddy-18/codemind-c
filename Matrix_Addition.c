#include<stdio.h>
int main()
{
    int m1,n1,m2,n2;
    scanf("%d %d", &m1, &n1);
    int mat1[m1][n1];
    for(int r=0; r<m1; r++)
    {
        for(int c=0; c<n1; c++)
        {
            scanf("%d", &mat1[r][c]);
        }
    }
    scanf("%d %d", &m2, &n2);
    int mat2[m2][n2];
    for(int r=0; r<m2; r++)
    {
        for(int c=0; c<n2; c++)
        {
            scanf("%d", &mat2[r][c]);
        }
    }
    
    for(int r=0; r<m1; r++)
    {
        for(int c=0; c<n2; c++)
        {
            printf("%d ", mat1[r][c] + mat2[r][c]);
        }
        printf("
");
    }
}