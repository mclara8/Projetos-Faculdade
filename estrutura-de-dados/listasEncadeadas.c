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
        // Verificação de erro na alocação
        printf("Erro na alocação de memória para o nó cabeça. \n");
        return 1; 
    }

    // Inicializar o campo next como NULL
    myList.head -> next = NULL; 

    // Criar um novo nó e adicioná-lo à lista
    struct Node* newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erro na alocação de memória para o nó cabeça. \n");
        free(myList.head); // Liberar memória alocada para a cabeça
        return 1;
    }

    newNode -> data = 22; // Atribuir valor ao campo data do novo nó
    newNode -> next = myList.head -> next; // O next do novo nó aponta para NULL
    myList.head -> next = newNode; // O next da cabeça agora aponta para o novo nó

    // Remover o nó recém-adicionado
    struct Node* temp = myList.head -> next; // Apontar para o nó a ser removido
    myList.head -> next = temp -> next; // Atualizar o ponteiro next da cabeça

    // Liberar a memória do nó removido
    free(temp);

    // Libera a memória alocada para o nó cabeça
    free(myList.head);

    return 0; 
}