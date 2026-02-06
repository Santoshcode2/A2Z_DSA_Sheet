#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={11,12,13,14};
    int k;
    cout<<" enter how many times you want to rotate  ";
    cin>>k;
    vector<int>temp(4); 
                                 //logic to rotate the arr
    for(int i=0;i<4;i++){
                temp[(i+k)%4]=arr[i];
         }
                        // printing the rotated arr
    cout<<"after rotating "<<k<<" times our arr "<<endl;
    for(int i=0;i<4;i++){
        cout<<temp[i]<<" ";
    }
}