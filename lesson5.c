/*
Write and test a function called larger_of() that replaces the contents of two
double variables with the maximum of the two values. For example,
larger_of(x,y) would reset both x and y to the larger of the two.

*/

void  larger_of(int *x, int *y);

int main (void) {

 int x = 10, y = 5;

printf("Before:  x = %d, y = %d\n", x, y);
// Pass addresses of x and y
larger_of(&x, &y);
printf("After:  x = %d, y = %d\n", x, y);

    return 0;

}


void  larger_of(int *x, int *y) {

int max;
if (*x > *y ) {

     max = *x;
   

} else 
{
     max = *y;

}

    // Replace both variables with the larger value

 *x = max;
 *y = max;
}