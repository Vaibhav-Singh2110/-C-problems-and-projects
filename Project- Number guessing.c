#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int main(){
     srand(time(0));
    int number = rand()%100 +1;
    int nguesses= 1;
     int input;
     printf("Enter a number between 1 and 100 \n");
     do{
     scanf("%d", &input);
     if (input<number)
     {
        printf("Enter a greater number\n");
        
     }
     else if(input>number){
         printf("Enter a smaller number\n");
     }
     else
     {
         printf("you have guessed the correct number in %d attempts.\n", nguesses);
         
         
     }
     nguesses++;
     }while (input!= number);
     
     
     
     
     
     
     
     return 0;
}