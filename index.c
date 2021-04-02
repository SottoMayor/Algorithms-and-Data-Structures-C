#include <stdio.h>

/*
Program Name: Language C - the type of variables and best practices.
Goal: Understand how to declare variables and use the best practices in C.
References: https://www.youtube.com/watch?v=5f_NSd3nnGo&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=7&t=3784s, 
            http://linguagemc.com.br/boas-praticas-de-programacao-em-linguagem-c/, 
            http://excript.com/linguagem-c/nomenclatura-variavel-c.html

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

    // To name variables I will adopt camelCase;

    /*
        Special characters: - ç - ~ - ´ - ' - " - % - & - ( - ) - { - } - [ - ] :
        Numeric characters: - + - - - * - /
        We cannot use these characters to define variables.

        The use of numbers is allowed in the composition of names, as long as this is not the first character.
        nameOfVariable100 (allowed) and 100NameOfVariable (not allowed)

        We can define variable names using an underscore, both at the beginning and at the end of the name.
        _name (allowed) and name_ (allowed)
    */

   // How to declare multiple variables with the same characteristics
   int number, counter, accumulator;

   // The main types of variables in C

    float GRAVITY = 9.8; // constant
    int x; // integer (4 bytes)
    unsigned int y; // unsigned integer (4 bytes)
    unsigned long int z; // unsigned log integer (8 bytes)
    long int a; // long integer (8 bytes)
    short int b; // short integer (2 bytes)
    char c; // (1 bytes)
    unsigned char d; // (1 bytes)
    float e; // comma numbers (4 bytes)
    double f; // comma numbers (8 bytes)
}