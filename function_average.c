#include<stdio.h> 
void average();

int main(){
     printf("gsv \n");
     average();
     return 0;
}

    void average(){
    int a, b, c;
    printf("Enter the first number \n");
    scanf("%d",a);
    printf("Enter the second number \n");
    scanf("%d",b);
    printf("Enter the third number \n");
    scanf("%d",c);
    int average;
    printf("The average of the three numbers provided are %d", (a+b+c)/3);
    }
    
