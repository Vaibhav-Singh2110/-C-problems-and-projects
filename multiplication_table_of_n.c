// using do-while loop
// #include<stdio.h> 

int main(){
     int i = 1;
     do{
         printf("%d \n", 4*i);
         i++;
     }while(i<=10);                   
     return 0;
}

// using for loop

#include<stdio.h> 

int main(){
     for(int i = 1; i<=10; i++){
         printf("%d \n", 4*i);
     }
     return 0;
}

// using while loop

#include<stdio.h> 

int main(){

    int i =1;
     while(i<=10){
         printf("%d", 4*i);
     }
     return 0;
}