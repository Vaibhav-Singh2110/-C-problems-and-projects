#include<stdio.h>

int returnmax(int array[], int n){
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        
    }
    return max;

}

int main(){
   int array[] = {1, 4, 78, 45, 6, 90, 34};
   int max= returnmax(array, 7);
   printf("The largest element of the array is %d", max);

    return 0;
}