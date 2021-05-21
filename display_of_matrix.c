#include<stdio.h> 

int main(){
     int a[2][3], b[3][2];
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d element of the first matrix \n", i, j);
            scanf("%d", &a[i][j]);
        }
        
     }

      printf("The first matrix is : \n");
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
     }


     for (int k = 0; k < 3; k++)
     {
        for (int l = 0; l < 3; l++)
        {
            printf("Enter the %d %d element of the second matrix \n", k, l);
            scanf("%d", &b[k][l]);
        }
        
     }

     printf("The second matrix is : \n");
     for (int k = 0; k < 3; k++)
     {
        for (int l = 0; l < 3; l++)
        {
            printf("%d \t", b[k][l]);
        }
        printf("\n");
     }


     
     return 0;
}