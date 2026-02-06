#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    class Node{
        public:
        int val;
        int key;
        Node*next;
        Node* prev;

        Node(int _key,int _val){
            key=_key;
            val=_val;
        }
    };

    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);

    map<int,Node*>mpp;
    int cap;

    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
      //add node just after the head
    void addNode(Node* newnode){
        Node* temp=head->next;
        
        newnode->next=temp;
        temp->prev=newnode;

        head->next=newnode;
        newnode->prev=head;
    }
    //you have to delete any node
    void deleteNode(Node* delnode){
        Node* prevdelNode=delnode->prev;
        Node* nextdelNode=delnode->next;

        prevdelNode->next=nextdelNode;
        nextdelNode->prev=prevdelNode;
    }
    
    int get(int key) {
        if(mpp.find(key)!=mpp.end()){
            Node* resnode=mpp[key];
            int ans=resnode->val;
            mpp.erase(key);
            deleteNode(resnode);
            addNode(resnode);
            mpp[key]=head->next;

            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            Node* existingNode=mpp[key];
            deleteNode(existingNode);
            mpp.erase(key);          
        }
        if(mpp.size()==cap){
            mpp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key,value));
        mpp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */