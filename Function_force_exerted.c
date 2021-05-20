#include<stdio.h> 
void force();

int main(){
     printf("Below is the formula to calculate force on a body of mass m exerted by the earth \n");
     force();
     return 0;
}

void force(){
    float g = 9.8, m;
    printf("Enter the mass of the body \n");
    scanf("%f", &m);
    printf("The force exerted by the earth on a body of mass m is %f N.", g*m);

    
}