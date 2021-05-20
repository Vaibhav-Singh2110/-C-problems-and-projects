#include<stdio.h> 

int main(){
    int a;
    printf("Enter the number\n");
     scanf("%d", &a);
     int mul[a];
     
     for(int i = 0; i<a; i++){ 
         mul[i] = 5*(i+1);
          printf("5x%d = %d \n", i+1,5*(i+1));
     }
     return 0;
}