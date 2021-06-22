#include<stdio.h>

int swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
int main(){
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("Number before swapping is : %d %d\n", a, b);
    int result = swap(a,b);
    
   return 0; 
}