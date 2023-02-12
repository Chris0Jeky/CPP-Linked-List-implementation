#include <iostream>
#include "Linkedlist.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Linkedlist list;


    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    std::cout << "Elements of this list are: ";

    list.printList();
    std::cout << std::endl;

    list.deleteNode(2);
    std::cout << "Elements of the list are: ";
    list.printList();
    std::cout << std::endl;
    return 0;
}
