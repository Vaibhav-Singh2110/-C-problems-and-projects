#include<stdio.h> 

int main(){
     int a;
     printf("Type the number you want to check for its divisibility by 97 \n");
     scanf("%d", &a);
     if(a%97 ==  0){
         printf("It is divisible");
     }else{
         printf("not divisible");
     }
     return 0;
}