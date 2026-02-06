#include<bits/stdc++.h>
using namespace std;


struct Node{
   Node* next;
};
 
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
      if(head==nullptr) return new Node(x);
       Node* node=new Node(x);
       node->next=head;
       head=node;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
        if(head==nullptr) return new Node(x);
       Node* temp= head;
       while(temp->next!=NULL){
           temp=temp->next;
       }//now you reach the end of LL
       Node* node=new Node(x);
       temp->next=node;
       node->next=nullptr;
       return head;
    }
    
  
};