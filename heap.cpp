#include<bits/stdc++.h>
#include<queue>
using namespace std;
class heap{
    public:
          int arr[100];
          int size=0;


    void  insertion(int val){
      //insert at the end
       size = size + 1;
       int index = size;
       arr[index]=val;

       //now keep that element at right place 
       while(index>1){
         int  parent = index/2;
          if(arr[index]>arr[parent]) {
            swap(arr[parent],arr[index]);
            index=parent;
          }
          else return;
       }
    }
    void print(){
          for(int i=1;i<=size;i++){
              cout<<arr[i]<<" ";
          }  
          cout<<endl;
    }
    //code for deletion 
      void deleteFromHeap(){
         if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
         }
         // step1: last node ko peehli node pe rakhna hai
         arr[1]=arr[size];
         size--; // step2: taki last node koi acess na kar pai koi
         //step3: take root node to its correct position
         int i=1;
         while(i<size){
             int leftIndex=2*i;
             int rightIndex=2*i+1;

             if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
             }
             else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
             }
             else return;
         }       

      }

};

void heapify(int arr[],int n,int i){
                                   //1-->n | (n/2)+1 --> n = leaf nodes | 1-->n/2
     int largest = i;
     int  leftChild = 2*i;
     int rightchild = 2*i+1;
     if(leftChild<=n && arr[largest]<arr[leftChild]){
         largest = leftChild;//then update your largest
     }
     if(rightchild<=n && arr[largest]<arr[rightchild]){
            largest = rightchild;
     }
     //check whether your largest has been updated
     if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
     }
}

void heapSort(int arr[],int n){
    int size=n;
    while(size>1){
      //step1: swap
       swap(arr[size],arr[1]);
       size--;
      //step2: 
       heapify(arr,size,1);

    }
}oop


int main(){
   heap h;
   h.insertion(55);
   h.insertion(54);
   h.insertion(53);
   h.insertion(80);
   h.insertion(52);
   h.print();
   h.deleteFromHeap();
   h.print();

   int arr[]={-1,54,53,55,90,50};
   int n=5;

   //heap creation
   for(int i=n/2;i>0;i--){
      heapify(arr,n,i);
   }
   cout<<"now printing my array:  "<<endl;
   for(int i=1;i<=n;i++){
      cout<<arr[i]<<" ";
   }cout<<endl;

   //heap sort
   heapSort(arr,n);
   cout<<"now printing my sorted heap array:  "<<endl;
   for(int i=1;i<=n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<"using priority queue here"<<endl;
   //ye ek maxHeap hota hai dost
   priority_queue<int>pq;
   pq.push(5);
   pq.push(4);
   pq.push(1);
   pq.push(26);
   pq.push(0);

   // cout<<"element at the top "<<pq.top()<<endl;
   // pq.pop();
   // cout<<"new element at the top "<<pq.top()<<endl;
   // cout<<"size of maxHeap "<<pq.size()<<endl;
   // if(pq.empty()){
   //    cout<<"pq is empty"<<endl;
   // }
   // else cout<<"pq is not empty"<<endl;
   

   // //minHeap
   // priority_queue<int,vector<int>,greater<int>>minHeap;
   // minHeap.push(5);
   // minHeap.push(4);
   // minHeap.push(1);
   // minHeap.push(26);
   // minHeap.push(0);
   // cout<<"top element of minHeap "<<minHeap.top()<<endl;
   // minHeap.pop();
   // cout<<"top element of minHeap "<<minHeap.top()<<endl;
   // cout<<"size of minHeap "<<minHeap.size()<<endl;
   // if(minHeap.empty()){
   //    cout<<"minHeap is empty"<<endl;
   // }
   // else cout<<"minHeap is not empty"<<endl;
 return 0;
}
