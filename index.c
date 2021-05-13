#include <stdio.h>
#include <string.h>

/*
Program Name: Language C | DSA - Quick Sort.
Goal: Working and Understanding the Quick Sort, and experiencing a more optimized version of Quick Sort.
References: https://www.youtube.com/watch?v=GAw5Lcuzu-Y&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=42.

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

// This is the tradicional Quick Sort, we can optimize this method!
void quickSort(float array[], int start, int end){

    int pointer1, pointer2;
    float pivot, tmp;

    if(start < end){
        pivot = array[(start+end)/2];
        pointer1 = start;
        pointer2 = end;

        while (pointer1 <= pointer2){

          while(array[pointer1] < pivot){
                pointer1++;
            }
            while(array[pointer2] > pivot){
                pointer2--;
            }

            if(pointer1 <= pointer2){
                tmp = array[pointer1];
                array[pointer1] = array[pointer2];
                array[pointer2] = tmp;
                pointer1++;
                pointer2--;
            }

        }
        
        
        quickSort(array, start, pointer2);
        quickSort(array, pointer1, end);

    }

    printf("Finished!\n");

}


void optimizedQuickSort(float array[], int start, int end){

    int pointer1, pointer2;
    float pivot, tmp;

    while( start < end ){
        pivot = array[(start + end)/2];
        pointer1 = start;
        pointer2 = end;

        while( pointer1 <= pointer2 ){

            while(array[pointer1] < pivot){
                pointer1++;
            }
            while(array[pointer2] > pivot){
                pointer2--;
            }

            if(pointer1 <= pointer2){
                tmp = array[pointer1];
                array[pointer1] = array[pointer2];
                array[pointer2] = tmp;
                pointer1++;
                pointer2--;
            }

        }

        if(pointer2 < ((start + end)/2)){
            optimizedQuickSort(array, start, pointer2);
            start = pointer1;
        }else{
            optimizedQuickSort(array, pointer1, end);
            end = pointer2;
        }

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


    showArray(vet, size);

    optimizedQuickSort(vet, 0, size - 1);

    showArray(vet, size);

}
    