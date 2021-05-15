#include <stdio.h>
#include <string.h>

/*
Program Name: Language C | DSA - Merge Sort.
Goal: Working and Understanding the Merge Sort, and working with Merge technique.
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

void mergeSort(float array[], float arrayAux[], int start, int end){
    int pointer1, pointer2, pointer3, middle;

    if(start < end){
        middle = (start + end) / 2;
        mergeSort(array, arrayAux, start, middle);
        mergeSort(array, arrayAux, middle + 1, end);

        // Now, the merge technique

        pointer1 = start;
        pointer2 = middle + 1;
        pointer3 = start;

        while((pointer1 <= middle) && (pointer2 <= end)){
            if(array[pointer1] < array[pointer2]){
                arrayAux[pointer3] = array[pointer1];
                pointer1++;
            }else{
                arrayAux[pointer3] = array[pointer2];
                pointer2++;
            }
            pointer3++;
        }

        while(pointer1 <= middle){
            arrayAux[pointer3] = array[pointer1];
            pointer1++;
            pointer3++;
        }

        while(pointer2 <= end){
            arrayAux[pointer3] = array[pointer2];
            pointer2++;
            pointer3++;
        }
    

        // This step pass the ordained arrayAux to our aaray
        for(pointer3 = start; pointer3 <= end; pointer3++){
            array[pointer3] = arrayAux[pointer3];
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

    float vetAux[size];

    mergeSort(vet, vetAux, 0, size - 1);

    showArray(vet, size);

}
    