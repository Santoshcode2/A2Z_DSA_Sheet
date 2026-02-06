#include<bits/stdc++.h>
using namespace std;
class node{
      public:
      int data;
      node* next;
      node* back;
       
       public:
       node(int data1,node*next1,node*back1){
              data=data1;
              next=next1;
              back=back1;
       }
       
       public:
       node(int data1){
           data=data1;
           next=nullptr;
           back=nullptr;
         }
};
node* delete_key(node*head,int k){
     node* temp=head;
     while(temp!=NULL){
        if(temp->data==k){
             if(temp==head){
                  head=temp->next;
             }
             node* nextnode=temp->next;
             node* prevnode=temp->back;
             if(nextnode!=NULL) nextnode->back=prevnode;
             if(prevnode!=NULL) prevnode->next=nextnode;
             free(temp);
             temp=nextnode;
        }else{
            temp=temp->next;
        }
     }return head;
}