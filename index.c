#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Program Name: Language C | DSA - Circular Linked Lists.
Goal: Working Circular Linked Lists, adding and removing elements.
References: https://www.youtube.com/watch?v=Xhqtlf9AHxg&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=70,
            https://www.youtube.com/watch?v=Xhqtlf9AHxg&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=71.
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

// Creating a struct
typedef struct student{
    char name[30];
    char course[30];
    float coefficient;
}student;

// Show the struct student data
void showStudent(student studentData){
    printf("The student name: %s\n", studentData.name);
    printf("The student course: %s\n", studentData.course);
    printf("The student coefficient: %.2f\n", studentData.coefficient);
}

// Creating the Node of the Linked List
typedef struct node{
    student data;
    struct node *next;
}node;

// Creating The Linked List
typedef struct linkedList{
    node *current;
}linkedList;

// Initializing the Linked List
void initLinkedList(linkedList *pList){
    pList->current = NULL;
}

void insertData(linkedList *pList, student *studentData){
    // Creating a pointer of type (struct) node
    node *aux;

    // Getting some space in Heap
    aux = (node*) malloc (sizeof(node));
    
    // Copping the adrress of studentData to (struct student) data in (struct) node
    aux->data = *studentData;
    // Checking if the list is not NULL
    if(pList->current){
        // Passing the address of the current element of the LinkedList to the next node adress
        aux->next = pList->current->next;
        // Att the the address of the current element with the adress of aux
        pList->current->next = aux;
    }else{
        pList->current = aux;
        aux->next = aux;
    }

}

void nextElement(linkedList *pList){
    if(pList->current){
        pList->current = pList->current->next;
    }
}


//Show the LinkedList
void showLinkedList(linkedList *pList){
    node *aux;

    if(pList->current){
        aux = pList->current;
        showStudent(aux->data);
        aux = aux->next;

        while(aux != pList->current){
            showStudent(aux->data);
            printf("\n");
            aux = aux->next;
        }
    }

    
}



int removeByName(linkedList *pList, char *key){
    node *aux, *following;

    if(pList->current){
        aux = pList->current;
        following = aux->next;
        while(following != pList->current){
            if(!strcmp(following->data.name, key)){
                aux->next = following->next;
                free(following);
                return 1;
            }
            aux = following;
            following = following->next;
        }
        if(!strcmp(following->data.name, key)){
            if(aux == following){
                pList->current = NULL;
            }else{
                aux->next = following->next;
                pList->current = following->next;
            }
            free(following);
            return 1;
        }
    }

    return 0;

}





int main(){

    
    student someStudent;
    linkedList studentList;

    student *pStudent, *removeStudent;

    initLinkedList(&studentList);

    strcpy(someStudent.name, "David");
    strcpy(someStudent.course, "Mathematics");
    someStudent.coefficient = 10;

    insertData(&studentList, &someStudent);

    strcpy(someStudent.name, "Fulano");
    strcpy(someStudent.course, "Engineering");
    someStudent.coefficient = 8.5;

    insertData(&studentList, &someStudent);

    strcpy(someStudent.name, "Ana");
    strcpy(someStudent.course, "Economy");
    someStudent.coefficient = 9;

    insertData(&studentList, &someStudent);

    showLinkedList(&studentList);

    char name[40];

    for(int index = 0; index < 3; index++){
        printf("Which element will be removed: ");
        scanf("%[^\n]%*c", name);
        if(removeByName(&studentList, name)){
            printf("After remove %s\n", name);
            printf("#################################\n");
            showLinkedList(&studentList);
        }else{
            printf("%s is not in the list!\n", name);
        }
    }
}