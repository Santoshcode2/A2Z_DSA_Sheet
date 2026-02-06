#include<iostream>
using namespace std;
int main(){
    int arr1[6]={1,3,4,3,3,5};            //common elements in two arrays
    int arr2[4]={3,3,2,5};
    for(int i=0;i<6;i++){
           for(int j=0;j<4;j++){
                if(arr1[i]<arr2[j]){              
                    break;
                }
                if(arr1[i]==arr2[j]){
                    cout<<arr2[j]<<" ";
                    arr2[j]=-1  ;               

                }
           }
    }return 0;

}
