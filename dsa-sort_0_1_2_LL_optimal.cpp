#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* next;
    int data;
    //constructor  --> we have to write the constructor because the node class is not having the constructor 
    // but we are trying to create new nodes with values like new Node(1) which requires parametrised constructor
    Node(int val){ 
        data=val;
        next=NULL;
    }

    
};

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
           
           if(head==NULL) return NULL;
           
           
           Node* dummyNode0=new Node(-1); Node* current0=dummyNode0;
           Node* dummyNode1=new Node(-1);  Node* current1=dummyNode1;
           Node* dummyNode2=new Node(-1);   Node* current2=dummyNode2;
           
           Node* temp=head;
           
           while(temp!=NULL){
                if(temp->data==0){
                    Node* newNode0=new Node(0);
                    current0->next=newNode0;
                    current0=current0->next;
                    
                }
                else if(temp->data==1){
                    Node* newNode1= new Node(1);
                    current1->next=newNode1;
                    current1=current1->next;
                }
                else{
                    Node* newNode2= new Node(2);  
                    current2->next=newNode2;
                    current2=current2->next;
                }
                temp=temp->next;
           }
          if(current0->data!=-1 && current1->data!=-1){
              current0->next=dummyNode1->next;
          }
          if(current1->data!=-1 && current2->data!=-1){
                 current1->next=dummyNode2->next;   
          }if(current1->data==-1){
               current0->next=dummyNode2->next;
          }
          if(current0->data!=-1 ) return dummyNode0->next;
        if(current0->data==-1 && current1->data!=-1) return dummyNode1->next;
        if(current1->data==-1 && current2->data!=-1)  return dummyNode2->next;
    } 
};