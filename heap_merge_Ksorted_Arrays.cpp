#include<bits/stdc++.h>
using namespace std;

class node{
    public: 
    int data;
    int i;
    int j;
    node(int data ,int row, int col){
        this->data= data;
        i=row;
        j=col;
    }
};
class compare{
    public:
    bool operator()(node* a, node* b){
         return a->data > b->data;
    }
};



vector<int> mergeKSortedArrays(vector<vector<int>>&arr, int k){
   //apna khud ka min heap create karunga
   //mujhe yaha khud ka comparator likhna padega
   priority_queue<node*,vector<node*> ,compare>minHeap;
   
   //step1: sare array ke first element ko insert karna hai
   for(int i=0;i<k;i++){
    node* tmp = new node(arr[i][0],i,0);
        minHeap.push(tmp);
   }
   vector<int>ans;
   //step2
    while (minHeap.size() > 0){
        node* tmp = minHeap.top();

         ans.push_back(minHeap.top());
         minHeap.pop();

         int i = tmp->i;
         int j = tmp->j;
         if(j+1 < arr[i].size()){
            node* next = new node(arr[i][j+1],i,j+1);
         }
    }
    return ans;
}
int main(){
   
    return 0;
}