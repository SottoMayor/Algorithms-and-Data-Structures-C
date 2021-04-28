#include <stdio.h>
#include <string.h>

/*
Program Name: Language C | DSA - The Binary Search.
Goal: Working and Understanding the binary search.
References: https://www.youtube.com/watch?v=vhLh8B_S5Ms&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=33.

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


// Binary Search
// For this data structure, the vector must be ordered. For now, let's just assume that.

int binarySearch( float array[], unsigned arrayLength, unsigned key ){

    int max, min, mean;

    min = 0;
    max = arrayLength - 1;

    while( min <= max ){

        mean = (max - min) / 2;

        if(array[mean] > key){
            min = mean + 1;
        }else if( array[mean] < key ){
            max = mean - 1;
        }else{
            return 1;
        }

    }

    return 0;

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

    printf(" %.2f ]\n ", array[arraylength - 1]);

}

int main(){

    unsigned size;
    float searchKey;

    scanf("%u%*c",&size);
    float vet[size];

    for(unsigned x = 0; x< size; x++) {
        scanf("%f%*c",&vet[x]);
    }

    printf("Enter your search key: ");
    scanf("%f", &searchKey);

    if(binarySearch(vet, size, searchKey)) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

}
    