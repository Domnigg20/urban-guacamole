/*

Write a program that initializes an array-of-double and then copies the contents
of the array into two other arrays. (All three arrays should be declared in the
main program.) To make the first copy, use a function with array notation. To
make the second copy, use a function with pointer notation and pointer
incrementing. Have each function take as arguments the name of the target array
and the number of elements to be copied. That is, the function calls would look
like this, given the following declarations:
double source[5] = {1.1, 2.2, 3.3., 4.4, 5.5};

*/

#include <stdio.h>
#include <string.h>


//protypes
void cpy_array_1(double source_1[], double source_2[], int n);
void cpy_array_2(double source_1[], double source_3[], int n);


int main () {

    double source_1 [5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int  n = sizeof(source_1) / sizeof(source_1[0]);

    double source_2 [n];
    double source_3 [n];

    /* double *ptr_1 = &source_1;
    double *ptr_2 = &source_2;
    double *ptr_3 = &source_3;   

    */   

cpy_array_1(source_1, source_2, n);  // Call first copy function
cpy_array_2(source_1, source_3, n); // Call second copy function
return 0;
}


//using array notation
void cpy_array_1(double source_1[], double source_2[], int n){
for ( int i = 0; i < n ; i++) {
    source_2[i] =  source_1[i];
    
}

 printf("Copy Elements\n");
    for (int i = 0; i < n; i++) {
    printf("Source_2[%d] = %.2lf\n", i, source_2[i]); // Print copied elements
    }
}


// First copy using ptr
void cpy_array_2(double source_1[], double source_3[], int n) {
    
double *ptr_1 = &source_1[0];

    // Using pointer arithmetic to copy elements
for ( int i = 0; i < n ; i++) {
    source_3[i] = *(ptr_1++);

}

printf("Copy Elements\n");
// Using pointer arithmetic to copy elements
for ( int i = 0 ; i < n; i++) {
 printf("Source_3[%d] =  %.2lf\n", i, source_3[i] );
}

}




