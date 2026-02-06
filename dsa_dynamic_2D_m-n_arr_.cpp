#include<iostream>                           //creating 2D m*n arr
using namespace std;
                                    //for 1D arr-->int *arr=new int [n]
int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    int **arr=new int *[row];
                              //inserting arr inside pointer
    for(int i=0;i<row;i++){
        arr[i]=new int [col];
    } 
    //taking input in 2d arr
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
              cin>>arr[i][j];
        }
    }
    //output in 2D arr
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cout<<arr[i][j]<<"  ";
        }cout<<endl;
    }

    //releasing the memory
    for(int i=0;i<col;i++){
        delete[] arr[i];
    }
     delete[] arr;

     return 0;
}