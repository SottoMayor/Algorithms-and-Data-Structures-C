#include <stdio.h>

/*
Program Name: Language C - Knowing strings.
Goal: Initializing with strings, inputting and displaying strings.
References: https://www.youtube.com/watch?v=fsfn-jIidNw&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=23.

David Sotto Mayor
*/

/* The Best Practices:
    - Use simple and clear names for routines and variables.
    - Indent your code appropriately at all times.
    - Before the code body of each function, always make a comment explaining what it does.
    - If the routine is very large, it is also important to explain what the purpose of 
    each variable is in order to facilitate understanding and maintenance.
    - Declare the variables right after the routine title.
    - Always be clear and objective.
    - Try not to do excessively long routines.
    - Avoid repetition of code.
    - Always keep the purpose of the code in mind.
    - Instead of using a 'loose' number in your code, use a previously declared constant.
    - Declare the constants at the beginning of the code and never in the middle of it.
    - Always use CAPITAL LETTERS to name the constants.
    - Use spacing to make the code more readable.
    - Always use {}.
    - Do not overdo it in the comments.
    - Write a comment explaining complex formulas and complicated steps for a given algorithm.
    - Write the necessary comments as you write the code.
*/

int main() {

    // Declaring the arrays of string as CHAR.
    char name[100];
    char major[100];

    // Inputting data in them, to read strings we use the combination %[^\n]

    printf("How is your name? ");
    scanf("%[^\n]%*c", name);

    printf("What is your major? ");
    scanf("%[^\n]%*c", major);

    //Now, we will display the string. For this, utilize %s

    printf("Hi! I'm %s and my major is %s.", name, major);

}
    