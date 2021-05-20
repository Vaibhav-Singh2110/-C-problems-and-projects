#include<stdio.h> 

int main(){
     FILE *ptr;
     ptr = fopen("Vaibhav.txt","r");
     int num1, num2;
     fscanf(ptr, "%d", &num1);
     fscanf(ptr, "%d", &num2);
     fclose(ptr);
     printf("The first number obtained from the file is %d \n", num1);
     printf("The second number obtained from the file is %d \n" , num2);
     return 0;
}