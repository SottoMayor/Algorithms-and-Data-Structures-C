#include <stdio.h>

// To work with strings, we need add a new include
#include <string.h>

/*
Program Name: Language C - String manipulation using native functions.
Goal: Understanding the handling of strings: strcmp, strcpy, strlen and others.
References: https://www.youtube.com/watch?v=E1sLEGWb9y8&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=24.

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
    unsigned stringLength;

    // Inputting data in them, to read strings we use the combination %[^\n]

    printf("How is your name? ");
    scanf("%[^\n]%*c", name);

    printf("What is your major? ");
    scanf("%[^\n]%*c", major);

    printf("Hi! I'm %s and my major is %s. \n\n", name, major);


    //We use strlen(param) to get the length of string

    stringLength = strlen(name);
    printf("The length of the name is %u \n", stringLength);

    printf("The length of the major is %lu \n", strlen(major));


    // When we want to compare strings, we use strcmp(param1, param2). This function returns -1, 0, 1 regarding the param1 and param2
    // Look the exemple

    if(strcmp(name, major) == 0){
        printf("The %s and $s are the same string!\n\n", name, major);
    }else if( strcmp(name, major) == -1 ){
         printf("The %s comes before the %s.\n\n", name, major);
    }else{
         printf("The %s comes after the %s.\n\n", name, major);
    }
    // There is also a variation of this function, and is strncmp(param1, param2, n). Here, the functions compares only the Nth
    // position of the strings!


    // To copy a string, we use the strcpy(param1, param2)
    strcpy(name, major);
    // There is also a variation of this function, and is strncpy(param1, param2, n). Here, the functions copies only the Nth
    // position of the string!


    // To concatenate, we use strcat(param1, param2)
    strcat(name, major);




}
    