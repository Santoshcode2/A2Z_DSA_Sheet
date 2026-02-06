#include<iostream>
using namespace std;
void quick_sort(int arr[],int s,int e);
int partition(int arr[],int s,int e);

int main(){
    int arr[6]={2,6,1,0,12,7};
    int n=6;

    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
void quick_sort(int arr[],int s,int e){
          //base case
          if(s>=e){
            return;
          }
          //partition karna padega
          int p=partition(arr,s,e);

          //left part ko sort karenge
          quick_sort(arr,s,p-1);
          
          //right part ko sort karenge
          quick_sort(arr,p+1,e);
}
int partition(int arr[],int s,int e){
               int pivot=arr[s];

               int cnt=0;
               for(int i=s+1;i<=e;i++){
                     if(arr[i]<=pivot){
                        cnt++;
                     }
               }
               
               //place the pivot at right index
               int pivotIndex=s+cnt;
               swap(arr[pivotIndex],arr[s]);
               //left and right wale part ko sambhal lete hai
               int i=s,j=e;

               while(i<pivotIndex && j>pivotIndex){
                    while(arr[i]<pivot){
                             i++;
                    }while(arr[j]>pivot){
                        j--;
                    }if(i<<pivotIndex && j>pivotIndex){
                        swap(arr[i++],arr[j--]);
                    }
               }return pivotIndex;
               
}