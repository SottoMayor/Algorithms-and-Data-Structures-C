#include <stdio.h>

/*
Program Name: Language C -  Loops.
Goal: Know the loops for, while, do-while.
References: https://www.youtube.com/watch?v=p3pAgdL00qg&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=16.

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

    //Exercise: make a program in c that shows all the odd numbers from 0 to 100

    int counter = 0;

    //WHILE
    while(counter < 100){

        //this condition gets the odd numbers!
        if(counter % 2 == 1){
            printf("%d ", counter);
        };

        counter++;

    };

    counter = 0;

    //DO-WHILE
    do{

        //this condition gets the odd numbers!
        if(counter % 2 == 1){
            printf("%d ", counter);
        };

        counter++;
    }while(counter < 100);


    //FOR
    for(int count = 0; count < 100; count++){

        //this condition gets the odd numbers!
        if(count % 2 == 1){
            printf("%d ", count);
        };

    };

}
    