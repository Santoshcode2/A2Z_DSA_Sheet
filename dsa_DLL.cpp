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
    if(arr.size()==0) return NULL; 
        node* head=new node(arr[0]);
        node* temp=head;
        for(int i=1;i<arr.size();i++){
            
           node* Node=new node(arr[i]);
           temp->next=Node;
           Node->back=temp;
           temp=temp->next;
        }
        return head;

}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* deleteHead(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;
}
node* deleteTail(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node*newTail=tail->next;
    newTail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;

}
node* removeKthElement(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    node*temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    node*prev=temp->back;
    node*front=temp->next;
    if(prev==NULL && front==NULL){
           cout<<"null";
           return NULL;
    }
    else if(prev==NULL){
        head=deleteHead(head);
        return head;
    }
    else if(front==NULL){
        head=deleteTail(head);
        return head;
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    
    return head;

}
void deleteNode(node*temp){
    node*prev=temp->back;
    node*front=temp->next;
    if(front==NULL){       //means temp is at tail
         prev->next=nullptr;
         temp->back=nullptr;
         free(temp);
         return;
    }
    //if node is having both front & end
    //create link
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    free(temp);

}
node* insertBeforeHead(node* head,int val){
       node* newHead=new node(val,head,nullptr);
       head->back=newHead;
       return newHead;
}
node* insertBeforeTail(node* head,int val){
            //edge case
            if(head->next==NULL){
                return insertBeforeHead(head,val);
            }
            node*tail=head;
            while(tail->next!=NULL){
                tail=tail->next;
            }
            node* prev=tail->back;
            node*newNode=new node(val,tail,prev);
            //  newNode->next=tail;     /*it is wrong
            //  newNode->back=prev;            /*
             prev->next=newNode;
             tail->back=newNode;
            return head;
}
node* insertBeforeKthElement(node*head,int k,int val){
     if(k==1){
         return insertBeforeHead(head,val);
     }
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
            cnt++;
            if(cnt==k){
                break;
            }temp=temp->next;
    }node*prev=temp->back;
    node* newNode=new node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;

}
void insertBeforeNode(node*node1,int val){
    node*  prev=node1->back;
    node* newNode=new node(val,node1,prev);
    prev->next=newNode;
    node1->back=newNode;
}
node* reverseDLL(node* head){
       node*prev=NULL;
       node*current=head;
       while(current!=NULL){
              
              //reverse the links
              prev=current->back;
              current->back=current->next;
              current->next=prev;
              current=current->back;
       }return prev->back;
}
node* EvenOddList(node* head){
    if(head==NULL || head->next!=NULL){
             return head;
    }
    node* odd=head;
    node* even=head->next;
    node* evenHead=head->next;

    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;

}
    node* oddEvenList(node* head) {
        if(head == NULL || head->next == NULL) return head;

        node* odd = head;
        node* even = head->next;
        node* evenHead = head->next;

        while(even!=NULL && even->next!=NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }

int main(){
   vector<int> arr={1,4,2,7,3};
   node* head = convertArr2DLL(arr);
   //deleteNode(head->next->next);
   //head=insertBeforeHead(head,12);
   // head= insertBeforeTail(head,18);
   //head=insertBeforeKthElement(head,1,19);
   //insertBeforeNode(head->next,20);
  // head= reverseDLL(head);
   head=oddEvenList(head);
   print(head);
   return 0;
}










