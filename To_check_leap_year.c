#include<stdio.h> 

int main(){
     int year;
     printf("Enter the year you want to check for its leap. \n");
     scanf("%d", &year);
     if("%d", year%4 == 0){
          if("%d", year%100 == 0){
               if("%d", year%400 == 0){
                     printf("The year is a leap year, it has 366 days.");
               }else{
                    printf("The year is not a leap year. it has 365 days.");
               }
          }else{
               printf("The year is a leap year, it has 366 days.");
          }
     }else{
          printf("The year is not a leap year, it has 365 days.");
     }
     return 0;
}