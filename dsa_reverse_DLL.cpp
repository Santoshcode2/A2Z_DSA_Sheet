/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        if(head==NULL || head->next==NULL) return head;
       Node* temp=head;
       Node* back=nullptr;
       while(temp!=NULL){
           Node* front=temp->next;
             temp->next=back;
             temp->prev=front;
             back=temp;
             temp=front;
       }return back;
    }
};
