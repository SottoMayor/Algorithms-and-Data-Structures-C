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

    // LOOPS!

    /*
    
    int counter = 0; obs: this number should not necessarily start with 0, it can start with 1, 2, ...., 1000, for example.
    int limit = k; obs: this number is arbitrary, it is our limit wich we will use to stop te loop!

    //WHILE
    while(counter < limit){

        //Our loop code here...

        counter++ //The counter not necessarily should be counter++, we can increment this with 
                 //counter = counter + 3 or something like that!

    };
    
    //DO-WHILE -> much like the previous loop, the difference is that we first execute the action then we check the condition.

    do{

        //Our loop code here...

        counter++ //The counter not necessarily should be counter++, we can increment this with 
                 //counter = counter + 3 or something like that!

    }while(counter < limit);

    //FOR -> This loop is the most used in arrays.

    for(int count = 0; count < limit; count++){

        //Our loop code here...

    }

    */



    float average, note, AMOUNT_NOTES;
    int counter = 0;
    float accumulator = 0;

    while (note > 0 && accumulator >= 0){

        printf("Write the note: ");
        scanf("%f%*c", &note);

        if(note >= 0){
            accumulator += note;
            counter++;
        };
        
    };
    
    average = accumulator / counter;

    printf("Average: %.2f\n", average);

    if(average >= 5){
        printf("Approved!");
    }else{
        printf("Disapproved!");
    }

}