#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
#include <memory>
#include <cstddef>

class DoublyLinkedList {
private:
    struct Node {
        std::shared_ptr<Node> prev;
        std::shared_ptr<Node> next;
        int data;

        explicit Node(int value) : 
            data(value), 
            prev(nullptr), 
            next(nullptr){}
    };
    
    std::shared_ptr<Node> head;
    std::shared_ptr<Node> tail;
    size_t size;

public:
    // Name: DoublyLinkedList
    //
    // Description: Constructor for instantiating a Doubly Linked List
    //
    DoublyLinkedList();

    // Name: ~DoublyLinkedList
    //
    // Description: Destructor for the class which is responsible for object cleanup
    //
    ~DoublyLinkedList();
    
    // Name: add
    // 
    // Description: This method is used to add a new item to the DLL
    //
    void add(int value);
    
    // Name: remove
    //
    // Description: This method is used to remove an item from the DLL
    //
    void remove(int value);
    

    // Name: getLength
    // 
    // Description: This method is used to return the length of the DLL
    //
    size_t getLength() const;
    
    // Name: printList
    //
    // Description: This method is used to display the items in the DLL
    //
    void printList() const;
    
    
};
#endif
