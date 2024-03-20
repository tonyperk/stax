#include "../include/DoublyLinkedList.h"
#include <iostream>


DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

void DoublyLinkedList::add(int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}


void DoublyLinkedList::remove(int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
	    if (current->prev) current->prev->next = current->next;
            if (current->next) current->next->prev = current->prev;

	    if (current == head) {
                 head = current->next;
	    }
	    else if (current == tail) {
		tail = tail->prev;
	    }

            std::cout << "Removing item: " << current->data << "\n";
            delete current;
            size--;
            return;
        }
        current = current->next;
    }
}


size_t DoublyLinkedList::getLength() const {
    return size;
}


void DoublyLinkedList::printList() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}


DoublyLinkedList::~DoublyLinkedList() {

    std::cout << "Destructor called to perform clean up...\n";
    Node* current = head;
    
    int numItems = this->getLength();
    std::cout << "DoublyLinkedList has " << numItems << " items\n";

    while (current != nullptr) {
        std::cout << "Removing item: " << current->data << "\n";
        Node* next = current->next;
        delete current;
        current = next;
    }

    if(current == nullptr){
        std::cout << "The list is now empty\n";
    }
}
