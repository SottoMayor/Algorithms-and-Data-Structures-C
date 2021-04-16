#include <stdio.h>
#include <string.h>

/*
Program Name: Language C - The Structs.
Goal: Understanding Structs.
References: https://www.youtube.com/watch?v=7aBcHxlkp0g&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=25.

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

// Out of the scope of the any function, we are in the 'scope' global! Here we will define our structs (in arbitrary way, of course!)

struct person
{
    char name;
    char surname;
    float salary;
};

// Nested structs
struct major
{
    char major;
    char hierarchy;
};

struct worker
{
    struct major major;
    char name;
    char surname;
    float salary;
};





int main() {

    struct person Fulano, Sicrano;

    // how we can pass data into the struct -> structName.proprety
    scanf("Name: %[^\n]%*c \n", Fulano.name);
    Fulano.surname = "Souza";
    Fulano.salary = 2050;
    Fulano.salary *= 2;

    //copy structs
    Sicrano = Fulano;


    // Nested structs

    struct worker Beltrano;

    Beltrano.major.major = "Developer";
    Beltrano.major.hierarchy = "Senior";
    Beltrano.name = "Beltrano";
    Beltrano.surname = "Da Silva";
    Beltrano.salary = 55000;


}
    