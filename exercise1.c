/*
Modify the rain program in Listing 10.7 so that it does the calculations using
pointers instead of subscripts. (You still have to declare and initialize the array.)
*/

#include <stdio.h>
#define MONTHS 12
#define YEARS 5
int main() {
    float rain[5][12] = {
        {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0, 11.1, 12.2},
        {0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5, 11.5},
        {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0},
        {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0},
        {5.5, 6.5, 7.5, 8.5, 9.5, 10.5, 11.5, 12.5, 13.5, 14.5, 15.5, 16.5}
    };

    float (*ptr)[MONTHS] = rain;  // Pointer to the first element of the rain array

//calculate total rainfall for each year using ptrs
for (int i = 0; i < YEARS; i++) {

    float total = 0.0;
   for (int j = 0; j < MONTHS; j++) {
    total += *(*(ptr + i) + j);

   }
    printf("Value of i is %.1f\n", **ptr ); 

   printf("Total rainfall for year %d: %.3f\n", i + 1, total); 

}
return 0;

}
