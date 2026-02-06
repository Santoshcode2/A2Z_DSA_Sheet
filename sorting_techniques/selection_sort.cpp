/* 
SELECTION SORT --> for ascending  --> try to find the minimum in the entire row each time & swap it with the first element
                   for descending --> try to find the maximum in the entire row each time 

 T.C=O(N^2)-->in best case | average | worst 
*/

#include<bits/stdc++.h>
using namespace std;
        void getSort(vector<int> arr);
class Solution{
    public:
        void getSort(vector<int>& arr){
             int n=arr.size();
             
             for(int i=0;i<n;i++){
                int min_ind=i;
                for(int j=i+1;j<n;j++){
                    if(arr[min_ind]>arr[j]){
                        min_ind=j;
                    }
                }
                swap(arr[min_ind],arr[i]);
             }
        }

};
int main(){
    vector<int>arr;
    cout<<"enter the elements of arr: ";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    getSort(arr);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

