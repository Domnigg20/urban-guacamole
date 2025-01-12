/*
Write a function that returns the difference between the largest and smallest
elements of an array-of-double. Test the function in a simple program.
*/


#include <stdio.h>
#include <stdlib.h> // for rand
#include <time.h>   // for time
#define SIZE 15




double read_max (double arr[],  int size);
double read_min ( double arr[], int size );
double diff (double read_max, double read_min);


int main() {
    
double test[SIZE];

    srand(time(NULL)); // Seed the random number generator

    // Initialize the array with random double values
    for (int i = 0; i < SIZE; i++) {
        test[i] = (double)(rand() % 100); // Random numbers between 0 and 99
    }
    
    double max = read_max(test, SIZE);
    double min = read_min(test, SIZE);
    double result = diff(max, min);


    if (result != -1) {
        printf("The difference between %.2f and %.2f is %.2f\n", max, min, result);
    } else {
        printf("Array is empty.\n");
    }




    return 0;
}


 


double  read_max ( double arr[], int size ) {
if (size <= 0) {
    return -1; // Return -1 if the array is empty
    }


double max = arr[0]; 
 for ( int i = 0; i < size; i ++)
 {  
   
    if (arr[i] > max) {
    max = arr[i];

    }
    

 }

return max;
}


double read_min ( double arr[], int size ) {
     if (size <= 0) {
        return -1; // Return -1 if the array is empty
    }
    double min = arr[0]; 
 for ( int i = 0; i < size; i ++)
 {  
   
    if (arr[i] < min) {
    min = arr[i];

    }
    

 }

return min;
}


double diff ( double max, double min) {
    if (max >= min) {
            
        return max - min;
      
    } 
    else {
        return -1;

    }
    
}
