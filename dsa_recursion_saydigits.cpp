#include<iostream>
using namespace std;
int getdigit(int n,string arr[]);

int main(){
      int n;
      cin>>n;
      string arr[]={"zero"," one"," two","three ","four ","five ","six ","seven ","eight ","nine "};
      getdigit(n,arr);

}
int getdigit(int n,string arr[]){
               //base case
               if(n==0){
                return 0;
               }
               //processing
               int digit=n%10;
               n=n/10;
              //recusive call
               getdigit(n,arr);
               cout<<arr[digit];
}