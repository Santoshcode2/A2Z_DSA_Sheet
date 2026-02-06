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
node* convertArr2DLL(vector<int>&arr){
    node* head=new node(arr[0]);
    node* prev=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* find_tail(node* head){
      node*temp=head;
      while(temp->next!=NULL){
           temp=temp->next;
      }return temp;
}
vector<pair<int, int>>find_pair(node* head,int sum){
    node* left=head;
    node* right=find_tail(head);
    vector<pair<int,int>>ans;
    if(head==NULL){
        return ans;
    }
    while(left->data < right->data){
          if(left->data + right->data==sum){
                 ans.push_back({left->data,right->data});
                 left=left->next;
                 right=right->back;
          }
          else if(left->data + right->data <sum){
                 left=left->next;
          }
          else{
             right=right->back;
          }
    }return ans;
}