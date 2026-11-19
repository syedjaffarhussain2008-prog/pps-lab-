#include <stdio.h>

int main()
{
    int a[10][10], s[100][3];
    int i, j, r, c, k = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    s[0][0] = r;
    s[0][1] = c;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] != 0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
            }
        }
    }

    s[0][2] = k - 1;

    printf("\nSparse Matrix:\n");
    for(i = 0; i < k; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
