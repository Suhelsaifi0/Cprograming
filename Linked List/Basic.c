#include<stdio.h>
#include<stdlib.h>

 struct Node{
     int data;
     struct Node* next;
 };

  void linkedlisrTraversal(struct Node* ptr){
       while(ptr != NULL){
        printf("ELEMENT ARE : %d\n", ptr->data);
        ptr = ptr->next;    
       }
  }

int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Link First Node to Second Node
    head->data = 7;
    head->next = second;
    
    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = NULL;

    linkedlisrTraversal(head);
    
    return 0;
}