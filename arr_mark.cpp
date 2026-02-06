#include<iostream>
using namespace std;
int main(){
    int marks[3];
    cout<<"enter phy,chem,math-marks:";
    cin>>marks[0]>>marks[1]>>marks[2];
    cout<<"phy: "<<marks[0]<<"\nchem: "<<marks[1]<<"\nmath: "<<marks[2];
    return 0;
}