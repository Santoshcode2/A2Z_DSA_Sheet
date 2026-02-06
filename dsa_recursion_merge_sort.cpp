#include<iostream>
using namespace std;
void mergeSort(int arr[],int s,int e);
void merge(int arr[],int s,int e);

int main(){
      int arr[15]={4,0,1,11,23,7,32,9,2,10,19,8,29,4,2};
      int n=15;
      mergeSort(arr,0,n-1);
      for(int i=0;i<n;i++){
           cout<<arr[i]<<"  ";
      }

      return 0;
}
void mergeSort(int arr[],int s,int e){
           //base case
           if(s>=e){
            return;
           }int mid=(s+e)/2;
           //left part sort karna hai
           mergeSort(arr,s,mid);
           //right part sort karna hai
           mergeSort(arr,mid+1,e);
           //merge two arr
           merge(arr,s,e);

}
void merge(int arr[],int s,int e){
       int mid=(s+e)/2;

       int len1=mid-s+1;
       int len2=e-mid;
                              //creating the arr
       int *first=new int[len1];                        //here we are using dynamic memory
       int *second=new int[len2];
                            //copy th values in arr 
        int k=s;                //where k is the index of Main_arr
        for(int i=0;i<len1;i++){
           first[i]=arr[k++];
        }                       
                               //copy th values in arr
        k=mid+1;
        for(int i=0;i<len2;i++){
             second[i]=arr[k++]; 
        }
        // code for merge two sorted arr
        int index1=0;
        int index2=0;
        k=s;
        while(index1<len1 && index2<len2){
                 if(first[index1]<second[index2]){
                         arr[k++]=first[index1++];
                 }else{
                    arr[k++]=second[index2++];
                 }
        }
        while(index1<len1){
                arr[k++]=first[index1++];
        }while(index2<len2){
                arr[k++]=second[index2++];
        }

        /*so whenever we are using dynamic memory we must delete it
        so to avoid memory leakage*/
        delete []first;
        delete[]second;
               

}