#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter matrix size: ";cin>>n;
    int m1[n][n],m2[n][n];
    cout<<"enter elements of matrix -A \n ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cin>>m1[i][j];
        }cout<<endl;
    }
    cout<<"enter element of matrix -B ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cin>>m2[i][j];
        }cout<<endl;
    }
    cout<<"matrix-> A\n";
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<m1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"matrix-> B\n";
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
                cout<<m2[i][j]<<" ";
           }cout<<endl;
        }
    cout<<"sum of two matrix [A]+[B] \n ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<m1[i][j]+m2[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"difference of two matrix [A]-[B] \n ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<m1[i][j]-m2[i][j]<<" ";
        }cout<<endl;
    }cout<<"transpose of matrix A\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m1[j][i]<<" ";
        }cout<<endl;
    }cout<<"multiplication of two matrices:[A]*[B]\n";
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
            int a=m1[i][j]*m2[k][j];
            s=s+a;
            }cout<<s<<" ";
        }cout<<endl;
    }
    
    
    return 0;
}

    
    