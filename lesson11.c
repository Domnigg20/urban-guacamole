/*

Write a function that sets each element in an array to the sum of the
corresponding elements in two other arrays. That is, if array 1 has the values 2,
4, 5, and 8 and array 2 has the values 1, 0, 4, and 6, the function assigns array 3
the values 3, 4, 9, and 14. The function should take three array names and an
array size as arguments. Test the function in a simple program
*/


#include <stdio.h>
#define ROWS 1
#define COLUMNS 4


//define arrays
void add_3_arrays (int rows, int cols, double arr_1[rows][cols],
	               double arr_2[rows][cols], double arr_3[rows][cols]);

void print_arr_3(int rows, int cols, double arr_3[rows][cols]);


int main()

{



const double arr_1 [ROWS][COLUMNS] =  { 1, 0,  4 , 6 };
const double arr_2 [ROWS][COLUMNS] = {2, 4, 5, 4};
double arr_3 [ROWS][COLUMNS] = {0};
 
// add contents of arr 1 to arr 2


 add_3_arrays (ROWS, COLUMNS, arr_1, arr_2, arr_3); 
 printf("Array_3:  \n");
 print_arr_3(ROWS, COLUMNS, arr_3);

return 0;
}

void add_3_arrays (int rows, int cols, double arr_1[rows][cols],
	               double arr_2[rows][cols], double arr_3[rows][cols] ) 
{


    for (int i = 0; i < rows; i++) {
        for ( int j = 0; j < cols; j++) {

                        arr_3[i][j]  = arr_1[i][j] + arr_2[i][j];
        }
        
}
}

void print_arr_3(int rows, int cols, double arr_3[rows][cols])
{
	// print the contents of a two-dimensional array

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			printf(" %10.3f ", arr_3[i][j]);
            putchar('\n');
	}
}

