#include<stdio.h>
int main(){
    int matrix1[3][2];
    int matrix2[3][2];
    int matrix3[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter %d %d element of matrix1\n", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("The matrix 1 is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t\t", matrix1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter %d %d element of matrix2\n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The matrix 2 is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t\t",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the two matrices is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t\t", matrix3[i][j]);
        }
        printf("\n");
    }
    
    

    
   return 0; 
}