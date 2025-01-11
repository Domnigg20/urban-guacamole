/*
Write a function that returns the index of the largest value stored in an array-of-
double. Test the function in a simple program.

*/

#include <stdio.h>
#include <stdlib.h> // for rand
#include <time.h>   // for time
#define SIZE 15

// Function prototype to find the index of the largest value
int max_index(double arr[], int size);

int main() {
    double test[SIZE];

    srand(time(NULL)); // Seed the random number generator

    // Initialize the array with random double values
    for (int i = 0; i < SIZE; i++) {
        test[i] = (double)(rand() % 100); // Random numbers between 0 and 99
    }

    // Print the array values
    printf("Array values:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", test[i]);
    }
    printf("\n");

    // Find and print the index of the largest value
    int index = max_index(test, SIZE);
    if (index != -1) {
        printf("The largest value is %.2f at index %d.\n", test[index], index);
    } else {
        printf("Array is empty.\n");
    }

    return 0;
}

// Function to find the index of the largest value in the array
int max_index(double arr[], int size) {
    if (size <= 0) {
        return -1; // Return -1 if the array is empty
    }

    int max_idx = 0; // Start with the first element as the largest
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[max_idx]) {
            max_idx = i; // Update the index of the largest value
        }
    }
    return max_idx;
}
