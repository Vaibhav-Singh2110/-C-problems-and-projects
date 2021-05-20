#include<stdio.h> 

int main(){
     FILE *ptr;
     ptr = fopen("Multiplication_Table.txt", "w");
         for (int i = 1; i <= 10; i++)
         {
             fprintf(ptr, "%d \n", 5*i);
         }
         fclose(ptr);
         
     return 0;
}