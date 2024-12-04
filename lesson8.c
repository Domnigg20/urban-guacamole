/*

Chapter 6, "C Control Statements: Looping," (Listing 6.20) shows a power()
function that returned the result of raising a type double number to a positive
integer value. Improve the function so that it correctly handles negative powers.
Also, build into the function that 0 to any power is 0 and that any number to the 0
power is 1. Use a loop. Test the function in a program.

*/
// power.c -- raises numbers to integer powers

#include <stdio.h>
double power(double n, int p); // ANSI prototype
int main(void)
{
double x, xpow;                                                 // 1st app
int exp;
printf("Enter a number and the positive integer power");
printf(" to which\nthe number will be raised. Enter q");
printf(" to quit.\n");

while (scanf("%lf%d", &x, &exp) == 2)
{
xpow = power(x,exp);                                                // 2nd app

// function call
printf("%.3f to the power %d is %.5f\n", x, exp, xpow);
printf("Enter next pair of numbers or q to quit.\n");
}
printf("Hope you enjoyed this power trip -- bye!\n");
return 0;
}


//define function power
double power(double n, int p)                              // 3rd app
{
double pow = 1;
int i;
{

// Handle the case of p == 0

if (p ==0) {
return 1.0;
}

if (p > 0){
    for (int i = 1; i <= p; i++) {
    pow *= n;

}
}

// Handle p < 0
if (p < 0) {
        int abs_p = -p; // Absolute value of p
        for (int i = 1; i <= abs_p; i++) {
            pow *= n; // Compute n^{|p|}
        }
        return 1.0 / pow; // Take reciprocal
    }


return pow;


// return the value of pow
}
}