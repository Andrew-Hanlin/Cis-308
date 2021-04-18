#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

///Andrew Hanlin Lab 2 4/6/2021
int main() {
    printf("printed head\n");


    Node* head=(struct Node*) malloc(sizeof(Node));
    head->data=2;
    head->next = NULL;
    Push(&head,5);
    Push(&head,4);
    Push(&head,4);
    Push(&head,3);
    Push(&head,2);
    Push(&head,1);
    printQueue(head);
    printf("Poped from head got : %d\n", Pop(&head));
    printQueue(head);

    printf("Counted for 2 got : %d\n", Count(head,2));
    printf("GetNth for 1 got : %d\n", GetNth(head,1));

    printf("GetNth for 2 got : %d\n", GetNth(head,2));
    InsertNth(&head,0,10);
    InsertNth(&head,3,10);
    printf("inserted 10 at 0\n", GetNth(head,2));
        printQueue(head);

    printf("inserted 10 at 3\n", GetNth(head,2));
    printQueue(head);

    Node* head2=(struct Node*) malloc(sizeof(Node));
    head2->data=5;
    head2->next = NULL;
    Push(&head2,5);
    Push(&head2,5);
    Push(&head2,5);
    Push(&head2,5);
    Push(&head2,5);
    Push(&head2,7);
    printQueue(head);
    printQueue(head2);

    printf("MoveNode x2\n");

    MoveNode(&head2,&head);
    MoveNode(&head2,&head);

    printQueue(head);
    printQueue(head2);
    printf("reverse head\n");
    Reverse(&head);
    printQueue(head);

    printf("delete head\n");
   DeleteList(head);
    printQueue(head);

    return 1;
}
