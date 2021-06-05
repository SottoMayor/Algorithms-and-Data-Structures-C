#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Program Name: Language C | DSA - Function to remove structures at the end and beginig of the Linked List.
Goal: Working with Linked List together with functions.
References: https://www.youtube.com/watch?v=Xhqtlf9AHxg&list=PLgMem-KiO8qFk4S62AjdYdzSkAIsxVmFq&index=67.

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
    node *first;
    node *last;
}linkedList;

// Initializing the Linked List
void initLinkedList(linkedList *pList){
    pList->first = NULL;
    pList->last = NULL;
}

// Inserting data at the begining into Linked List
void insertDataBegin(linkedList *pList, student *studentData){
    // Creating a pointer of type (struct) node
    node *aux;

    // Getting some space in Heap
    aux = (node*) malloc (sizeof(node));
    // Copping the adrress of studentData to (struct student) data in (struct) node
    aux->data = *studentData;
    // Passing the address of the first element of the LinkedList to the next node adress
    aux->next = pList->first;

    // Checking if the address of the first node is NULL
    if(pList->first == NULL){
        pList->last = aux;
    }
    // Att the the address of the first element with the adress of aux
    pList->first = aux;

}

// Inserting data at the end into Linked List
void insertDataEnd(linkedList *pList, student *studentData){
    // Creating a pointer of type (struct) node
    node *aux;

    // Getting some space in Heap
    aux = (node*) malloc (sizeof(node));
    // Copping the adrress of studentData to (struct student) data in (struct) node
    aux->data = *studentData;
    // Setting the address of the last element of the LinkedList as NULL
    aux->next = NULL;

    // Inserting if the size of the Linked List is grather than 1
    if(pList->last){
        // Linked List grather than 1
        pList->last->next = aux;
    }else{
        pList->first = aux;
    }

    // Att the the address of the first element with the adress of aux
    pList->first = aux;

}



//Show the LinkedList
void showLinkedList(linkedList *pList){
    node *aux;

    aux = pList->first;
    while(aux){
        showStudent(aux->data);
        printf("\n");
        aux = aux->next;
    }
}

//Function to search an element in the Linked List

student* searchDataByName(linkedList *pList, char *key){
    node *aux;
    aux = pList->first;

    while(aux){

        if(!strcmp(aux->data.name, key)){
            return &(aux->data);
        }
        aux = aux->next;
    }

    return NULL;

}

//Function to remove an element by name in the Linked List

student* removeDataByName(linkedList *pList, char *key){
    node *aux, *tmp;

    if(pList->first){

        if(!strcmp(pList->first->data.name, key)){
            tmp = pList->first;
            pList->first = tmp->next;
            if(pList->first == NULL){
                pList->last = NULL;
            }
            free(tmp);
            return 1;
        }

        aux = pList->first;

        while(aux->next){

            if(!strcmp(aux->next->data.name, key)){
                tmp = aux->next;
                if(tmp == pList->last){
                    pList->last = aux;
                }
                aux->next = tmp->next;
                free(tmp);
                return 1;

            }
            aux = aux->next;
        }

    }

    return 0;

}

//Function to remove an element at the begining of the Linked List

int removeDataBegin(linkedList *pList, student *result){
    node *tmp;
    tmp = pList->first;
    if(tmp){
        pList->first = tmp->next;
        if(pList->first == NULL){
            pList->last = NULL;
        }
        *result = tmp->data;
        free(tmp);
        return 1;
    }
    return 0;
}

//Function to remove an element at the end of the Linked List

int removeDataEnd(linkedList *pList, student *result){
    node *aux, *tmp;
    aux = pList->first;
    if(aux){
        // Only one element in the Linked List
        if(aux == pList->last){
            pList->last=NULL;
            pList->first=NULL;
            *result = aux->data;
            free(aux);
        }else{
            while(aux->next != pList->last){
                aux = aux->next;
            }
            tmp = aux->next;
            aux->next = NULL;
            pList->last = aux;
            *result = tmp->data;
            free(tmp);
        }
        return 1;
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

    insertDataBegin(&studentList, &someStudent);

    strcpy(someStudent.name, "Fulano");
    strcpy(someStudent.course, "Engineering");
    someStudent.coefficient = 8.5;

    insertDataBegin(&studentList, &someStudent);

    strcpy(someStudent.name, "Ana");
    strcpy(someStudent.course, "Economy");
    someStudent.coefficient = 9;

    insertDataBegin(&studentList, &someStudent);

    showLinkedList(&studentList);

    pStudent = searchDataByName(&studentList, "David");
    if(pStudent){
        printf("The student was found!\n\n");
    }else{
        printf("Student not found!\n\n");
    }

    removeStudent = removeDataByName(&studentList, "Fulano");
    if(removeStudent){
        printf("Student was successfully removed!\n\n");
    }else{
        printf("Student not found!\n\n");
    }

    showLinkedList(&studentList);

    strcpy(someStudent.name, "Fulano");
    strcpy(someStudent.course, "Engineering");
    someStudent.coefficient = 8.5;

    insertDataEnd(&studentList, &someStudent);

    showLinkedList(&studentList);
}
    