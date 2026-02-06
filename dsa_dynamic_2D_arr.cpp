#include<iostream>                           //creating 2D n*n arr
using namespace std;
                                    //for 1D arr-->int *arr=new int [n]
int main(){
    int n;
    cin>>n;               //creating 2D array
    int **arr=new int *[n];
                              //inserting arr inside pointer
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    } 
    //taking input in 2d arr
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
              cin>>arr[i][j];
        }
    }
    //output in 2D arr
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cout<<arr[i][j]<<"  ";
        }cout<<endl;
    }
    //releasing the memory
    for(int i=0;i<n;i++){
        delete[] arr[i];
    }
     delete[] arr;

     return 0;

}