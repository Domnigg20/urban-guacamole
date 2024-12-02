/*Write a program that reads characters from the standard input to end-of-file. For
each character, have the program report whether it is a letter. If it is a letter, also
report its numerical location in the alphabet. For example, c and C would both be
letter 3. Incorporate a function that takes a character as an argument and returns
the numerical location if the character is a letter and that returns –1 otherwise.

*/

#include <stdio.h>
#include <ctype.h>
#define MAX 10000

int get_alpha_position(char ch);


int main () {
 

char ch;
int position = 1;
int positions [MAX];
int index = 0;


printf("Enter characters (Ctrl+D to stop):\n");

for (position = 1; (ch = getchar()) != EOF; position++) {
if  (isalpha(ch)) {
int alpha_position = get_alpha_position(ch);  // Get alphabet position
 positions[index] = position;
printf("Character '%c' is at position %d in the input and letter %d in the alphabet.\n",
                   ch, position, alpha_position);
    index++;
      
   
}

}


// Optionally, display all stored positions
printf("\nPositions of alphabetic characters:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", positions[i]);
    }


    return 0;

}


int get_alpha_position(char ch)  { 

return tolower(ch) - 'a'  + 1; //convert to lowercase and calculate position

}



