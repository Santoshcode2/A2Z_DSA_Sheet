#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,3,4,8,12,0};
    for(int i=0;i<6;i++){

        for(int j=i+1;j<6;j++){
            for(int k=0;k<6;k++){
                   if(arr1[i]+arr1[j]==arr1[k]){
                   cout<<arr1[k]<<"  ";
                   arr1[k]=-1112;                             //update the value so it does not show same
                   }                                           //value again 
            }
        }
    }return 0;
}