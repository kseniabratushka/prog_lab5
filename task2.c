#include <stdio.h>

int main() 
{
    system("chcp 65001");
    int M, N;
    printf("Введіть кількість рядків (M): ");
    scanf("%d", &M);
    printf("Введіть кількість стовпців (N): ");
    scanf("%d", &N);

    int X[M][N];
    int Y[M];

    printf("Введіть елементи матриці %dx%d:\n", M, N);
    for (int i = 0; i < M; i += 1) 
    {
        for (int j = 0; j < N; j += 1) 
        {
            printf("X[%d][%d] = ", i, j);
            scanf("%d", &X[i][j]);
        }
    }

    for (int i = 0; i < M; i += 1) 
    {
        int sum = 0;
        for (int j = 0; j < N; j += 1) 
        {
            if (X[i][j] > 0) 
            {
                sum += X[i][j];
            }
        }
        Y[i] = sum;
    }

    printf("Масив Y (суми додатних елементів кожного рядка):\n");
    for (int i = 0; i < M; i += 1) 
    {
        printf("Y[%d] = %d\n", i, Y[i]);
    }

    return 0;
}
