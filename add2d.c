#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter the no.of rows and columns: ");
    scanf("%d %d",&m, &n);
    int a[m][n], b[m][n], c[m][n];
    int i, j;
    printf("Enter the values for matrix A: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values for matrix B: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("sum of matrices A and B:\n ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
