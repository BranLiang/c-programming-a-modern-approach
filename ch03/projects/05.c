#include <stdio.h>

int main(void)
{
    int i, j, row_sum, col_sum;
    int v[16];
    printf("Enter the numbers from 1 to 16 in any order:");
    for (i = 0; i < 16; i++)
    {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("%2d %2d %2d %2d\n", v[i*4], v[i*4+1], v[i*4+2], v[i*4+3]);
    }

    printf("Row sums:");
    row_sum = 0;
    for (i = 0; i < 16; i++)
    {
        if (i % 4 == 3)
        {
            row_sum += v[i];
            printf(" %d", row_sum);
            row_sum = 0;
        }
        else
        {
            row_sum += v[i];
        }
    }
    printf("\n");

    printf("Column sums:");
    for (i = 0; i < 4; i++)
    {
        col_sum = 0;
        for ( j = 0; j < 4; j++)
        {
            col_sum += v[j*4 + i];
        }
        printf(" %d", col_sum);
    }
    printf("\n");
    
    printf("Diagonal sums: %d %d\n", v[0] + v[5] + v[10] + v[15], v[3] + v[6] + v[9] + v[12]);
}