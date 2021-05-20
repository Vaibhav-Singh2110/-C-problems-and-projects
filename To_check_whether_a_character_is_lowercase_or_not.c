#include<stdio.h> 

int main(){
     char name;
     printf("Enter your name. \n");
     scanf("%c", &name);
     if(name<=122 && name>=97){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
     return 0;
}