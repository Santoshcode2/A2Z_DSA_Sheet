#include<bits/stdc++.h>
using namespace std;

Node* addtwoLL(Node* head1,Node* head2){
         Node* t1=head1;
         Node* t2=head2;
         Node* dummyNode=new Node(-1);
         Node* current=dummyNode;
         int carry=0;
         while(t1!=NULL || t2!=NULL){
            int sum=carry;
            if(t1) sum+=t1->data;
            if(t2) sum+=t2->data;
            Node* newNode=new Node(sum%10);
                carry=sum/10;
            current->next=newNode;
            current=current->next;
            if(t1)  t1=t1->next;
            if(t2)  t2=t2->next;
         }
         if(carry){
             Node* newNode=new Node(carry);
             current->next=newNode;
         }
         return dummyNode->next;  
}
//T.C=O(max(N1,N2)) & S.C=O(max(N1,N2))