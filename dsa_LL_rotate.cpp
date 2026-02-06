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
node* rotate_LL(node* head,int key){
         if(head==NULL || head->next==NULL || key==0) return head;
         
          int len=1; 
          node* tail =head;

          while(tail->next!=NULL){
               len++;
               tail=tail->next;
          }
          //base case
          if(key % len==0)  return head;
          tail->next=head;
          int r=key%len;
          node*temp=head;
          for(int i=0;i<len-r;i++){
                    head=temp->next;
                    temp->next=nullptr;

          }return head;
          
}
Node* merge(Node* list1,list2){
     Node* dummyNode=new Node(-1);
     Node* res=dummyNode;
     while(list1!=NULL && list2!=NULL){
          if(list1->data <list2->data){
               res->child=list1;
               res=list1;
               list1=list1->child;
          }else{
               res->child=list2;
               res=list2;
               list2=list2->child;  
          }
          res->next=nullptr;
     }
     if(list1) res->child=list1;
     else res->child=list2;
      if(dummyNode->child) dummyNode_>child->next=nullptr;
       return dummyNode->child;
}
Node* flattenLinkedList(Node* head){
     if(head==NULL || head->next==NULL){
          return head;
     }
     Node* mergeHead=flattenLinkedList(head->next);
     head=merge(head,mergeHead);
     return head;
}