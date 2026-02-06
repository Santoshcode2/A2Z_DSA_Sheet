#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m);

int main(){
      int arr1[]={1,2,2,3,5,6,6};
      int arr2[]={2,2,5,8};
      intersection(arr1,arr2,7,4);
      return 0;
}
void intersection(int arr1[],int arr2[],int n,int m){
            int i=0,j=0;
            while(i<7 && j<4){
                     if(arr1[i]<arr2[j]){
                            i++;
                     }
                     else if(arr1[i]==arr2[j]){
                            cout<<arr2[j]<<"  ";
                           arr2[j]=-123;
                            i++;
                            j++;
                     }else{
                            j++;
                          }
            }
}
         

