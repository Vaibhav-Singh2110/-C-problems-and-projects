#include<stdio.h>
void encrypt(char *str){
    char *ptr = str;
    while(*ptr != '\0'){
        *ptr = *ptr +1;
        ptr++;
    }
}
void decrypt(char *str){
    char *ptr = str;
    while(*ptr != '\0'){
        *ptr = *ptr -1;
        ptr++;
    }
}

int main(){
     char str[] = "My name is Vaibhav Singh.";
     encrypt(str);
     printf("The encrypted string is %s \n", str);
     decrypt(str);
     printf("The decrypted string is %s", str);
     return 0;
}