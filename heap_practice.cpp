#include<bits/stdc++.h>
using namespace std;

class heap {
   public:
      int arr[100];
      int size = 0;

      //inserion in heap
      void insertion(int val){           // T.C = O(logn)
          //step1: insert at the end
          size=size+1;
          int index =size;
          arr[index] = val;
          //step2: put that element in right place 
          while(index>1){
            int parent = index/2;
            if(arr[index]>arr[parent]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else return;
          }
      }

      void print(){
      cout<<"size of arr: "<<size<<endl;
         for(int i=1;i<=size;i++){
              cout<<arr[i]<<" ";
         }cout<<endl;
      }

     void deletion(){        // T.C = O(logn)
        if(size==0) return ;
        //mujhe root node ko delete karna hai
        // step1: swap 1st & last element
        arr[1]= arr[size];
        //step2:last element koi access na kar pay
        size=size-1;
        //step3: us node ko uski sahi jagah pe leke jana hai
        int i = 1;
        while(i<size){
            
            int leftchild = 2*i;
            int rightchild = 2*i+1;
            if(arr[leftchild]>arr[i]){
               swap(arr[leftchild],arr[i]);
               i = leftchild;
            }
            if(arr[rightchild]>arr[i]){
               swap(arr[rightchild],arr[i]);
               i = rightchild;
            }
            else return;
          
        } 

     }
//         here we have to convert an array to heap

};
     void heapify(int arr[], int n ,int i){      // T.C = O(n)
        //n/2 +1 --> n  = leaf nodes 1-->n/2 sahi jagah pe lagana hai bas
        int leftChild = 2*i;
        int rightChild= 2*i +1;
        int largest =i;
        if(leftChild<=n && arr[largest]<arr[leftChild]){
            largest = leftChild;
        }
        else if(rightChild<=n && arr[largest] < arr[rightChild]){
            largest = rightChild;
        }
        if(largest!= i){
            swap(arr[largest],arr[i]);           
            heapify(arr,n,largest);
        }
     }

     void heapSort(int arr[],int n){
        int size=n;
        while(size>1){
            //step1: swap 1st & last element
            swap(arr[size],arr[1]);
            size--;
            //step2: now place that node in correct position
            heapify(arr,size,1);
        }
     }

int main(){
      heap h;
      h.insertion(24);
      h.insertion(12);
      h.insertion(34);
      h.insertion(96);
      h.insertion(45);
      h.print();
      h.deletion();
      h.print();

      //heapify
      int arr[]={-1,24,12,34,96,45};
      int n =5;
      for(int i=n/2;i>0;i--){
          heapify(arr,n,i);
      }
      cout<<"now printing my array: "<<endl;
      for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
      }cout<<endl;

      
      cout<<"now printing my sorted array: "<<endl;
      heapSort(arr,n);
      for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
      }cout<<endl;


      return 0;
      
}

// int kthLargest(int arr[],int l ,int r , int k){
       
//        priority_queue<int,vector<int>,greater<int>>pq;
//        //step1: insert k elements into the heap
//        for(int i =0;i<k;i++){
//         pq.push(arr[i]);
//        }
//        //step2: remaing elements ko compare kar aur push kar
//        for(int i=k;i<r;i++){
//         if(arr[i]<pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//        }
//        return pq.top();
// }