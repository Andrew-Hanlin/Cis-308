//
// Created by Andrew on 4/6/2021.
//

#ifndef PROJECT2_LINKEDLIST_H
#define PROJECT2_LINKEDLIST_H




typedef struct node {
    int data;
    struct node* next;
} Node;
void Push(Node**, int);
int Pop(Node**);
int Count(Node*, int);
int  GetNth(Node*, int);
void DeleteList(Node**);
void InsertNth(Node**, int, int);
void MoveNode(Node**, Node**);
void recursiveReverse(struct Node*, struct Node**);
void Reverse(Node**);
void printQueue(Node*);

#endif //PROJECT2_LINKEDLIST_H
