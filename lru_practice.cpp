#include<bits/stdc++.h>
using namespace std;
class solution{
public:
class Node{
    public:
    int key;
    int val;
    Node* next;
    Node* prev;

    //constructor
    int Node(int key_,int val_){
        key=_key;
        val=_val;
    }
};
Node* head=new Node(-1,-1);
Node* tail=new Node(-1,-1);

head->next=tail;
tail->prev=next;
};