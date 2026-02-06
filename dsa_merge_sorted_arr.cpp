#include<iostream>
using namespace std;
void getmerge(int arr1[],int n,int arr2[],int m,int arr3[]);
void printarr(int arr3[],int n);

int main(){
    int arr1[5]={1,3,5,6,8};
    int arr2[3]={2,4,6};
    int arr3[8]={};
    getmerge(arr1,5,arr2,3,arr3);
    printarr(arr3,8);
    return 0;
}
void getmerge(int arr1[],int n,int arr2[],int m,int arr3[]){
                int i=0,j=0;
                int k=0;
                while(i<n && j<m){                       //if any one arr. will become large it will 
                        if(arr1[i]<arr2[j]){             //come out of loop
                            arr3[k]=arr1[i];             //coping the value of arr1[] into arr3[]
                            k++;
                            i++;
                        }else{
                            arr3[k]=arr2[j];
                            k++;
                            j++;
                        }
                }
                while(i<n){                        // if arr1[] is greater 
                    arr3[k]=arr1[i];
                    k++;
                    i++;
                }while(j<m){
                    arr3[k]=arr2[j];
                    k++;
                    j++;
                }
}
void printarr(int arr3[],int n){
    for(int i=0;i<n;i++){
           cout<<arr3[i]<<" ";
    }
}
