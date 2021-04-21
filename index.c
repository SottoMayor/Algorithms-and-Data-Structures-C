#include <stdio.h>
#include <string.h>

/*
Program Name: Language C - Arrays as parameters in functions and functions that do not return anything.
Goal: Working with functions and arrays in functions.
References: https://www.youtube.com/watch?v=ev1Eige8eBo&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=28.

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

// We use void in functions that do not return anything.
void showArray(float array[], int arraylength){

    if(arraylength == 0){
        printf("[ ]\n");
        return;
    }

    printf("[ ");

    for(int index = 0; index < arraylength - 1; index++){
        printf("%.2f; ", array[index]);
    }

    printf(" %.2f ]\n ", array[arraylength - 1]);

}

// Working with array as parameters in functions
float lowerValue(float array[], int arraylength){

    float smaller = array[0];

    for(int index = 0; index < arraylength; index++){

        if(array[index] < smaller){
            smaller = array[index];
        }

    }


    return smaller;

}

int main(){

    float array[6] = {1.7, 2, 7, 9.8, 10, 1};
    float smaller;

    smaller = lowerValue(array, 6);

    showArray(array, 6);

    printf("The lower value among the array values is: %.2f :)", smaller);   

}
    