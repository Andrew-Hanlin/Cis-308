//
// Created by Andrew on 4/6/2021.
//

#ifndef PROJECT2_LINKEDLIST_H
#define PROJECT2_LINKEDLIST_H




typedef struct node {
    int data;
    struct node* next;
} Node;

void Push(Node** headRef, int newData)
{
    Node *temp = (struct Node*) malloc(sizeof(Node));
    temp->data=newData;
    temp->next=*headRef;
    *headRef=temp;
}
int Pop(Node** head)
{
    if (*head == NULL) {
        return -1;
    }
    int data = (*head)->data;
    *head=(*head)->next;
    return data;
}
int Count(Node* head, int searchFor){
    int count=0;
    while(head != NULL) {
        if(searchFor==head->data){
            count++;
        }
        head= head->next;
    }
    return count;
}
int  GetNth(Node* head, int index){
    if(head==NULL){    printf("GetNth function out of bounds plese ignore result"); return(0);}
    int i=0;
    while (i!=index){
        head=head->next;
        i++;
    }
    return(head->data);

}
void DeleteList(Node** head){
    free(head);
    *head=NULL;

}
void InsertNth(Node** head, int index, int data){

    if(index == 0){
        Node* temp= (Node*) malloc(sizeof(Node));
        temp->data=data;
        temp->next=(*head);
        *head=temp;
    }
    else {
        Node* ptr = *head;
        int i = 1;
        while (i != index) {
            ptr = (ptr)->next;
            i++;
        }
        Node *temp = (Node *) malloc(sizeof(Node));
        temp->data = data;
        temp->next = (ptr)->next;
        ptr->next=temp;
    }
}
void MoveNode(Node** destRef, Node** sourceRef){
    int temp = Pop(sourceRef);
    Push(destRef,temp);
}
void recursiveReverse(struct Node* head, struct Node** headRef) {
    if(head==NULL){return;}
    Node* temp=head;
    Node* tempNext=temp->next;
    if(tempNext==NULL){
        *headRef=temp;
        return;
    }
    recursiveReverse(tempNext,headRef);
    tempNext->next=temp;
    temp->next=NULL;


}

void Reverse(Node** headRef){
    recursiveReverse(*headRef,headRef);
}


void printQueue(Node* l) {
    while(l != NULL) {
        printf("%d->", l->data);
        l = l->next;
    }
    printf("\n");
}
#endif //PROJECT2_LINKEDLIST_H
