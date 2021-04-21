#include <stdio.h>
#include <string.h>

/*
Program Name: Language C - Functions and Type of Variables.
Goal: Understanding and initializing with functions and type of variables.
References: https://www.youtube.com/watch?v=fTsaj5-g_DM&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=27.

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

// Observe this variable, every variable declared outside the scope of any function is a global variable.
int GLOBAL = 50;
int sumNumber = 100; // The variable global is every override by the local variable, if the names are equals.

// Functions must be declared according to the types it will return, Ex, int functions will return int and soon...

int sum(int a, int b){

    // Observe this variable, so it is defined only within the sum function. In this way, we call it the local variable.
    // If we try to call this variable in another function it will give an error, because it only exists inside the sum function.

    int sumNumber = 0; // This local variable overrides the global variable.

    // We can create a static variables, that keeps in our memory 
    // but we can just access this in the inside of the function which it was created.
    static int GLOBALVARFUNC = 100;

    //This function will return a int!

    sumNumber = a + b;

    return sumNumber;

}


//This main function should return a int, and it does that in a implicity way because this is our main function(as the name suggests).
int main() {

    //This is also a local variables;
    int part1 = 100;
    int part2 = 200;
    int functionSum;

    // Calling a function within the other

    functionSum = sum(part1, part2);

    printf("The value of this sum is %d :)", functionSum + GLOBAL);


}
    