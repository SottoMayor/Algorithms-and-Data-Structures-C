#include <stdio.h>

/*
Program Name: Language C -  Arrays: write and display data.
Goal: Initializing with arrays and learn how to write and display data with them.
References: https://www.youtube.com/watch?v=Nuhic9XfQrg&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=22.

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

    //Declaring an array
    int myArray[10]; // In this case an array of integers, and with 10 entries.

    //Populating the array with 0 or arbitrary numbers
    for(int index = 0; index < 10; index++){
        myArray[index] = 0;
    }

    //Display the elements of the array
    for(int index = 0; index < 10; index++){
        printf("%d ", myArray[index]);
    }


    //Now we will input numbers from the keyboard to array

    int array[10], counter;

    for(counter = 0; counter < 10; counter++){

        printf("Input a integer number in our array in the position %d: ", counter + 1);
        scanf("%d", &array[counter]);

    }

    for(counter = 0; counter < 10; counter++){
        printf("%d ", array[counter]);
    }


}
    