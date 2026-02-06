#include<iostream>
using namespace std;
void getmerge(int arr1[],int n,int arr2[],int m,int arr3[]);
void printarr(int arr3[],int n);

int main(){
        int arr1[5]={-3,5,8,10,12};
        int arr2[3]={1,3,6};
        int arr3[8]={};
         getmerge(arr1,5,arr2,3,arr3);
         printarr(arr3,8);
       return 0;
}
void getmerge(int arr1[],int n,int arr2[],int m,int arr3[]){
                  int i=0,j=0,k=0;
                  while(i<n && j<m){
                        if(arr1[i]>arr2[j]){
                                 arr3[k]=arr2[j];
                                 k++;j++;
                        } else{
                              arr3[k]=arr1[i];
                              k++;i++;
                        }    
                  }
                  while(i<n){
                         arr3[k]=arr1[i];
                         k++;
                         i++;  
                  }while(j<m){
                        arr3[k]=arr2[j];
                        k++;j++;
                  }
}
void printarr(int arr3[],int n){
      for(int i=0;i<n;i++){ 
        cout<<arr3[i]<<" ";
      }
}
