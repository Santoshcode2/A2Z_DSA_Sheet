#include<iostream>
using namespace std;
int intersection(int arr1[],int arr2[],int n,int m);
int main(){
       int arr1[]={1,2,2,2,4,4,6,6,6,9};
       int arr2[]={2,2,4,4,4,4,4,1,9};
       intersection(arr1,arr2,10,9);
       return 0;
}
int intersection(int arr1[],int arr2[],int n,int m){
                    int i=0,j=0;                                   //complexity of while loop is less 
                    while(i<n && j<m){                             //than two for loop
                                    if(arr1[i]==arr2[j]){
                                            cout<<arr2[j]<<" ";
                                            i++;
                                            j++;
                                    }else if(arr1[i]<arr2[j]){
                                          i++;
                                    }
                                    else{
                                        j++;
                                    }
                    }
}