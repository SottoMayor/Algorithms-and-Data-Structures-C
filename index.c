#include <stdio.h>

/*
Program Name: Language C - Arithmetic operators.
Goal: Understand the arithmetc operators.
References: https://www.youtube.com/watch?v=JDkHRHxOsGU&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=8.

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

    /* Arithmetic operators
    - Sum: +
    - Subtraction: -
    - Multiplication: *
    - Division: /
    - module: %
    */

    float average, note1, note2, note3;
    float AMOUNT_NOTES = 3.0;
    
    note1 = 7.5;
    note2 = 6.7;
    note3 = 8.3;

    average = (note1 + note2 + note3) / AMOUNT_NOTES;

    printf("Notes: %.2f, %.2f, %.2f and Average: %.2f\n", average, note1, note2, note3);

}