#include<iostream>
#include<vector>
using namespace std;

class node{
      public:
      int data;
      node* next;
       public:
       node(int data1){
           data=data1;
           next=nullptr;
         }




};
node* convertArr2LL(vector<int>&arr){
       node* head = new node(arr[0]);
      node*mover=head;
      for(int i=1;i<arr.size();i++){
            node *temp=new node(arr[i]);
            mover->next=temp;
            mover = mover->next;
      }return head;
}
void print(node* head){
      while(head !=NULL){
           cout<<head->data<<" ";
           head=head->next;
      }
      cout<<endl;
}
node* removehead(node* head){
      if(head==NULL) {
            return head;
      }
      node* temp=head;
      head=head->next;
      delete temp;
     return head;
}
node* removeTail(node* head){
      if(head==NULL || head->next==NULL ){
            return NULL;
      }
      node* temp=head;
      while(head->next->next!=NULL){
            temp->next;
      }
      free(temp->next);
      temp->next=nullptr;
      return head;
}
node* removeK(node* head,int k){
      if(head==NULL){
            return head;
      }
      if(k==1){
            node* temp=head;
            head=head->next;
            free(head);
            return head;
      }
      int cnt=0;
      node* temp=head;
      node* prev=NULL;

      while(temp!=NULL){
             cnt++;
             if(cnt==k){
                  prev->next=prev->next->next;
                  free(temp);
                  break;
             }prev=temp;
             temp=temp->next;
      }return head;
}

node* removeEl(node* head,int el){
      if(head==NULL){
            return head;
      }
      if(head->data==el){
            node* temp=head;
            head=head->next;
            free(head);
            return head;
      }
     //we will do linear search
      node* temp=head;
      node* prev=NULL;

      while(temp!=NULL){
            
             if(temp->data==el){
                  prev->next=prev->next->next;
                  free(temp);
                  break;
             }prev=temp;
             temp=temp->next;
      }return head;
}
// node* insHead(node* head,int val){
//    node* temp=new node(val,head);
//    return temp;
// }
node* insertTail(node* head,int val){
       if(head==NULL){
            return new node(val);
       }
       node* temp=head;
       while(temp->next!=NULL){
             temp=temp->next;
       }
       node* newNode = new node(val);
       temp->next=newNode;
       return head;
}
node* insertPosition(node* head,int el,int k){
       if(head==NULL){
            if(k==1){
                  return new node(el);
            }else{
                  return head;
            }
       }  
       if(k==1){
            return new node(el,head);
       }int cnt=0;
       node* temp=head;
       while(temp!=NULL){
            cnt++;
            if(cnt==(k-1)){
                  node* x=new node(el,temp->next);
                 // el->next=temp->next;
                 temp->next=x;
                 break;
            }temp=temp->next;

       }return head;
}

node* insertPosition(node* head,int el,int k){
       if(head==NULL){
            if(k==1){
                  return new node(el);
            }else{
                  return head;
            }
       }  
       if(k==1){
            return new node(el,head);
       }int cnt=0;
       node* temp=head;
       while(temp!=NULL){
            cnt++;
            if(cnt==(k-1)){
                  node* x=new node(el,temp->next);
                 // el->next=temp->next;
                 temp->next=x;
                 break;
            }temp=temp->next;

       }return head;
}


int main(){
      vector<int>arr={12,4,3,6};
      node* head=convertArr2LL(arr);
      // head= removeTail(head);
      //head=removeEl(head,4);
       //head=insHead(head,120);
       //head=insertTail(head,50);
       head=insertPosition(head,34,2);
       print(head);  
     
     //agar mai heap me node store karna chahta hu
      //node* node1=new node;
     //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    return 0;
}