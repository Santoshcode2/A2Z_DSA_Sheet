#include<iostream>
using namespace std;
int& update(int n);
int* fun(int n);
int main(){
        int n=6;
        update(n);
        fun(n);
}                            //it will show warning (very bad practice)
int& update(int a){         //here a,ans are local variables once the block end memory get cleared
    int &ans=a;           
     return ans;
}

int* fun(int n){         //it will show warning (very bad practice)
    int *ptr=&n;
    return ptr;
}
