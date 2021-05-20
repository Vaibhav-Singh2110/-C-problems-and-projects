#include<stdio.h> 

int main(){
     int a, b, c;
     printf("Enter the marks obtained in the a subject \n");
     scanf("%d", &a);
     printf("Enter the marks obtained in the b subject \n");
     scanf("%d", &b);
     printf("Enter the marks obtained in the c subject \n");
     scanf("%d", &c);
     if(a>=33){
         printf("You got %d percent marks in a and you are passed in this subject. \n", a);
    }
     else{
         printf("you are fail in a. \n");
     }
     if(b>=33){
         printf("You got %d percent marks in b and you are passed in this subject. \n", b);
    }
     else{
         printf("you are fail in b. \n");
     }
     if(c>=33){
         printf("You got %d percent marks in c and you are passed in this subject. \n", c);
    }
     else{
         printf("you are fail in c. \n");
     }
     if(((a+b+c)/3)>=40){
         printf("You have passed this exam and promoted to next semester. \n");
     }else{
         printf("You have to give compensatory. \n");
     }
     return 0; 
}