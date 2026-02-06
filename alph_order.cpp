#include<iostream>
using namespace std;
int main(){
    string s;
    char temp;
    int c=0,n;
    cout<<"enter the string: ";
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
          c++;
    }n=c;cout<<"size: "<<n<<endl;
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){ 
        if(s[i]>s[j]){
             temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
    }for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }return 0;
}