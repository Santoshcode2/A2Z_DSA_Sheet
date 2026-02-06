#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
   Node* prev;
   Node* next;
};
class Solution{
   public:
   Node*  reverseDll(Node* head){
       Node* last = NULL;
       Node* current = head;

       while(current!=NULL){
           //swap the links 
           last = current->prev;
           current->prev= current->next;
            current->next = last;
       }
       return head;

   }
};

