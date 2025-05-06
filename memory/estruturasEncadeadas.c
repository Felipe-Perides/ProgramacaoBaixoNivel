#include <stdio.h>
#include <stdlib.h>

// definir um nome temporário para a definição da struct:
typedef struct TNode{
    int data;
    struct TNode* next;
} Node;

typedef struct{
    Node* head;
    Node* tail;
    int size;
} List;

void initList(List* list);
void insertEnd(List* list, int value);
void insertBeginning(List* list, int value);
void printList(const List* list);
void freeList(List* list);

void initList(List* list){
    list -> head = NULL;
    list -> tail = NULL;
    list -> size = 0;
}

void insertEnd(List* list, int value){
    Node* newNode = malloc(sizeof(Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(list -> head == NULL){
        list -> head = list -> tail = newNode;
    }else{
        list -> tail -> next = newNode;
        list -> tail = newNode;
    }

    list -> size++;
}

void insertBeginning(List* list, int value){
    Node* newNode = malloc(sizeof(Node));
    newNode -> data = value;
    newNode -> next = list -> head;

    list -> head = newNode;
    if(list -> tail == NULL) list -> tail = newNode;

    list -> size++;
}

void printList(const List* list){
    Node* current = list -> head;

    printf("Lista (%d elementos): ", list -> size);

    while(current != NULL){
        printf("%d -> ", current -> data);
        current = current -> next;
    }

    printf("NULL\n");
}

void freeList(List* list){
    Node* current = list -> head;

    while(current != NULL){
        Node* next = current -> next;
        free(current);
        current = next;
    }

    list -> head = list -> tail = NULL;
    list -> size = 0;
}

int main(){

    List myList;
    initList(&myList);

    insertBeginning(&myList, 0);
    insertEnd(&myList, 10);
    insertEnd(&myList, 20);

    printList(&myList);

    freeList(&myList);
    return 0;
}