#include<iostream>
using namespace std;
int main(){
    int arr1[6]={1,2,2,2,3,4};
    int arr2[4]={2,2,3,3};
    int i=0,j=0;
    cout<<"intersection of two array  "<<endl;
    while(i<6 && j<4){
            if(arr1[i]<arr2[j]){
                    i++;
            }
            else if(arr1[i]==arr2[j]){
                     cout<<arr2[j]<<"  ";
                     i++;j++;
            }
            else{
                    j++;
            }
    }return 0;
}