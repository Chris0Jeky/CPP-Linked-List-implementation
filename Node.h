#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;
    Node* next;

    Node();
    explicit Node(int data);
};

#endif
