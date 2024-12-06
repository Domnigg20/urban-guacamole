/*Write and test a Fibonacci() function that uses a loop instead of recursion to
calculate Fibonacci numbers.
*/

// C Program to print the fibonacci series using loops
// C Program to print the fibonacci series using loops
#include <stdio.h>

void printFib(int n) {
  
      // If the number of terms is smaller than 1
    if (n < 1) {
        printf("Invalid Number of terms\n");
        return;
    }
  
      // First two terms of the series
    int prev1 = 1;
    int prev2 = 0;

    // for loop that prints n terms of fibonacci series
    for (int i = 1; i <= n; i++) {
          
          // Print current term and update previous terms
        if (i > 2) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf("%d ", curr);
        }
        else if (i == 1) {
          printf("%d ", prev2);
        }
           
        else if (i == 2) {
        printf("%d ", prev1); 

        }
            
    }
}

int main() {

    int n;
    
printf("Enter the number of terms (Ctrl+D or Ctrl+Z to quit): ");
    // Read integers until end-of-file (EOF) is encountered
    while (scanf("%d", &n) == 1) {
        printFib(n);
        printf("Enter the number of terms (Ctrl+D or Ctrl+Z to quit): ");
    }
    return 0;
}