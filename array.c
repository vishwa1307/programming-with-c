#include <stdio.h>
void main()
{
    int array[3][3], i, j;
    printf("Input elements in the matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n The matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", array[i][j]);
    }
}
