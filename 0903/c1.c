#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertfront(struct Node* head, int data) {
    struct Node* newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

void printList(struct Node* head){
    struct Node* current = head;
    while (current != NULL){
        printf("%d ",current->data);
        current = current -> next;
    }
    
}

struct Node* saerch(struct Node* head, int data){
    struct Node* current = head;
    while(current != NULL){
        if (current -> data = data){
            return current;
        }
        current = current -> next;
        return NULL;
    }
}

struct Node* delete(struct Node* head, int data){
    struct Node* current = head;
    struct Node* prev = head;
    while (current != NULL && current -> data = data){
        prev = current;
        current = current -> next;
    }
    if(current != NULL){
        prev -> next = current -> next;
        return head;
    }
}

int main() {
    struct Node* head = NULL;

    head = insertfront(head, 30);
    head = insertfront(head, 40);
    head = insertfront(head, 50);

    printfList(head);

    return 0;
}