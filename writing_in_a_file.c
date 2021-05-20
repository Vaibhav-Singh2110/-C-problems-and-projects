#include<stdio.h> 

int main(){
     FILE *ptr;
     ptr = fopen("Vaibhav2.txt", "w");
     fprintf(ptr,"My name is Vaibhav Singh. \n");
     fprintf(ptr,"The content written in this text file is by using fprintf. \n");
     fclose(ptr);  //--> It is important to close the file. It will tell the compliler that we are done with the work and the associated resourses needed for this file can be freed.

     return 0;
}