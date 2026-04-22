// Listas ligadas ou encadeadas com cabeça
#include <stdio.h>
#include <stdlib.h> 

struct Node {
    int data; 
    struct Node* next;
}; 

struct LinkedList {
    struct Node* head;
};

int main(){
    struct LinkedList myList; //Criar uma lista ligada vazia 

    // Alocar memória para o primeiro nó (cabeça)
    myList.head = malloc(sizeof(struct Node));
    if (myList.head = NULL) {
        printf("Erro na alocação de memória para o nó cabeça. \n");
        return 1; 
    }

    myList.head -> next = NULL; 

    // Criar um novo nó e adicioná-lo à lista
    struct Node* newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erro na alocação de memória para o nó cabeça. \n");
        free(myList.head); 
        return 1;
    }

    newNode -> data = 22; 
    newNode -> next = myList.head -> next; 
    myList.head -> next = newNode;

    // Remover o nó recém-adicionado
    struct Node* temp = myList.head -> next; 
    myList.head -> next = temp -> next; 

    free(temp);

    free(myList.head);

    return 0; 
}
