#include<stdio.h> 

int main(){
    int n;
    printf("Enter the multiple \n");
    scanf("%d", &n);
     int mul[n][n][n];
     for(int i = 0; i <n; i++){
         mul[i][i][i] = 2*(i+1),7*(i+1),9*(i+1);
         printf("|2*%d = %d|   |7*%d = %d|   |9*%d = %d|  \n", i+1, 2*(i+1), i+1, 7*(i+1), i+1, 9*(i+1));
     }
     return 0;
}