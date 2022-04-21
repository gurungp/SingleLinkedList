//
//  main.cpp
//  SingleLinkedList
//
//  Created by Prashant Gurung on 19/04/2022.
//

#include <iostream>
#include "singleLinkedList.h"



int main()
{
    
    Node *testNode = new Node;
    
// checking what the pointers store of the structure defined in its header
    Node *address_of_testNode = testNode;
    Node *value_of_next_of_testNode = testNode->next;
    
    std::cout << " Value of address_of_testNode is " << address_of_testNode << std::endl;
    
    std::cout << " Value of value_of_next_of_testNode is " << value_of_next_of_testNode << std::endl;
    
// Testing how a normally created and the one created with a pointer

    SingleList *A = new SingleList;
  
    A->addAtHead(75);
    A->addAtHead(8);
    A->addAtHead(9);
    A->addAtHead(10);
    A->addAtHead(11);
    A->addAtEnd(6);
    A->addAtEnd(5);
    A->addAtHead(100);
    A->addAtEnd(200);
    A->addAtPosition(3, 500);
    A->addAtPosition(0, 1000);
    A->addAtPosition(1, 300);
    A->addAtPosition(1, 2);
    A->addAtPosition(2, 2789);
    A->addAtPosition(3, 5000);
    A->addAtPosition(7, 7777);
    A->deleteFromBegin();
    A->deleteFromBegin();
    A->deleteAtEnd();
    A->deleteAtEnd();
    A->deleteAtEnd();
    A->deleteAtPos(2);
    A->deleteAtPos(2);
    A->deleteFromBegin();
    A->deleteFromBegin();
    A->deleteFromBegin();
    A->deleteFromBegin();
    A->deleteFromBegin();
    A->reverseList();
    
    A->display();
    A->reverseList();
    A->display();
    

    delete A;
    delete testNode;
    
    std::cin.get();
    
    return 0;
    
}
