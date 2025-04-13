#include <stdio.h>

int main() 
{
    system("chcp 65001");
    int N = 3;
    double A[10][10] = 
    {
        {1.5, -2.3, 3.0},
        {-4.1, 2.2, 0.0},
        {5.0, -6.6, 4.4}
    };

    double product = 1.0;
    int positive = 0;

    printf("Матриця A:\n");
    for (int i = 0; i < N; i += 1) 
    {
        for (int j = 0; j < N; j += 1) 
        {
            printf("%6.2f ", A[i][j]);
            if (A[i][j] > 0) 
            {
                product *= A[i][j];
                positive = 1;
            }
        }
        printf("\n");
    }

    if (positive) 
    {
        printf("Добуток усіх додатних елементів матриці: %.2f\n", product);
    } else {
        printf("У матриці немає додатних елементів.\n");
    }

    return 0;
}
