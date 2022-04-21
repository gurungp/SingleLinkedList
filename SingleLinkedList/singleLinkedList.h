//
//  singleLinkedList.h
//  SingleLinkedList
//
//  Created by Prashant Gurung on 19/04/2022.
//

#ifndef singleLinkedList_h
#define singleLinkedList_h

#include <iostream>

struct Node
{
    int value;
    struct Node* next;
};

Node* head=NULL;
Node* tail=head;

class SingleList
{
    Node* head = NULL;
    Node* tail = head;

public:
    Node* createNode(int val){
        Node *newNode = new Node;
        newNode->value=val;
        newNode->next=NULL;
              
        return newNode;
    }
    
    void addAtHead(int val)
    {
        Node *temp = createNode(val);
        
        if(head==NULL)
        {
            head = temp;
            tail = temp;
          
        }else{
            
            temp->next = head;
            head = temp;
         
       
        }
    }
    
    void addAtEnd(int val)
    {
        Node *temp = createNode(val);
        
        if(head==NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next=temp;
            tail = temp;
        }
    }
    
    void addAtPosition(int pos, int val)
    {
        
        if(pos<0)
            return;
        
        if(pos==0 || pos==1)
        {
            addAtHead(val);
            return;
        }
    if(head!=NULL)
    {
        int count = 2;
        Node *current = head->next;
        Node *prev = head;
        while(current!=NULL)
        {
            if(count==pos)
            {
                Node *newNode = new Node;
                newNode->value = val;
                newNode->next = current;
                prev->next = newNode;
                break;
            }
            count++;
            current=current->next;
            prev=prev->next;
           
        }
        
    }
       
    }
    
    void display(){
        Node *begin = head;
        while(begin!=NULL)
        {
            std::cout << begin->value ;
            
            begin=begin->next;
           
            if(begin!=NULL)
                std::cout << " -> " ;
        }
        std::cout << std::endl;
    }
    void deleteFromBegin()
    {
        if(head==NULL)
            return;
       
        Node *temp = head;
        head = head->next;
        delete temp;
        
    }
    void deleteAtEnd()
    {
        if(head==NULL)
            return;
        
        Node *prev = head;
        Node *current = head->next;

        while(current!=NULL)
        {
            if(current->next==NULL)
            {
                prev->next=NULL;
                delete current;
                
                break;
            }
            
            prev=prev->next;
            current=current->next;
        }
        
    }
    
    void deleteAtPos(int pos)
    {
        if(head==NULL)
            return;
        
        if(pos<0)
            return;
        
        if(pos==0 || pos==1)
        {
            deleteFromBegin();
        }
        else
        {
            int count = 2;
            Node *prev = head;
            Node *current = head->next;
            
            while(current!=NULL)
            {
                if(count==pos)
                {
                    prev->next = current->next;
                    delete current;
                    break;
                }
                current=current->next;
            }
            
        }
        
        
    }
    
    void reverseList()
    {
        if(head==NULL)
            return;
        
        Node *cur1 = head->next;
        Node *prev = head;
        Node *firstNode = head;
        Node *cur2 = head->next;
        
        while(cur2!=NULL)
        {
           // if(cur2->next!=NULL)
                cur2=cur2->next;
        
            cur1->next = prev;
            prev=cur1;  // prev = cur1
            
           if(cur2!=nullptr)
                cur1=cur2;
        //  cur2=cur2->next;
            
        }
        head=cur1;
        firstNode->next = NULL;
        tail = firstNode;
    }
};

#endif /* singleLinkedList_h */
