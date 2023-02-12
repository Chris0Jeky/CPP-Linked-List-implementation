#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class Linkedlist {
    Node* head;

public:
    Linkedlist();

    void insertNode(int);

    void printList();

    void deleteNode(int);
};

#endif
