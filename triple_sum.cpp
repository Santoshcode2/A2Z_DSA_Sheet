#include<iostream>
using namespace std;
void triple_sum(int arr[],int n);

int main(){
        int arr[]={1,2,3,4,5,6,0};
        triple_sum(arr,7);
        return 0;
}
void triple_sum(int arr[],int n){
            int no;
            cout<<"enter no: ";
            cin>>no;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
                         if(arr[i]+arr[j]+arr[k]==no){
                               cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                        }
                    }
                }
            } 
}
