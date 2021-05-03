#include <stdio.h>
#include <string.h>

/*
Program Name: Language C | DSA - The Insertion Sort.
Goal: Working and Understanding the insertion Sort.
References: https://www.youtube.com/watch?v=6FUzGE33prk&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=37.

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

// setting the boolean options
typedef int bool;
#define true 1
#define false 0


void insertionSort(unsigned arrayLength, float array[]){

    float control;
    unsigned rank;

    for(unsigned index = 0; index < arrayLength; index++){

        control = array[index];

        for(rank = index - 1; rank >= 0 && array[rank] > control; rank--){
            array[rank+1] = array[rank];
        }

        array[rank+1] = control;

    }

}



void showArray(float array[], int arraylength){

    if(arraylength == 0){
        printf("[ ]\n");
        return;
    }

    printf("[ ");

    for(int index = 0; index < arraylength - 1; index++){
        printf("%.2f; ", array[index]);
    }

    printf("%.2f ]\n ", array[arraylength - 1]);

}

int main(){

    unsigned size;

    scanf("%u%*c",&size);
    float vet[size];

    for(unsigned x = 0; x< size; x++) {
        scanf("%f%*c",&vet[x]);
    }


    insertionSort(size, vet);

    showArray(vet, size);

}
    