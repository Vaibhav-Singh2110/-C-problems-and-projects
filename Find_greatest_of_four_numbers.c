#include<stdio.h> 

int main(){
     int a, b, c, d;
     int smallest, largest;
     printf("Enter the first number. \n");
     scanf("%d", &a);
     printf("Enter the second number. \n");
     scanf("%d", &b);
     printf("Enter the third number. \n");
     scanf("%d", &c);
     printf("Enter the fourth number. \n");
     scanf("%d", &d);
     smallest = largest = a;
     if(largest<b){
         largest = b;
     }else if (b < smallest){
         smallest = b;
     }
     if(largest<c){
         largest = c;
     }else if (c < smallest){
         smallest = c;
     }
     if(largest<d){
         largest = d;
     }else if (d < smallest){
         smallest = d;
     }
     printf("\n Largest among four: %d", largest);
     printf("\n Smallest among four: %d", smallest);
     return 0;
}