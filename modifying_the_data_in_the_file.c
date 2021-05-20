#include<stdio.h> 

int main(){
     FILE *ptr;
     ptr = fopen("pr01.txt", "r");
     int a;
     fscanf(ptr, "%d", &a);
     fclose(ptr);
     ptr = fopen("pr01.txt", "w");
     fprintf(ptr, "%d", 2*a);
     return 0;
}