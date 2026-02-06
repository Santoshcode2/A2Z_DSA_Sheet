#include<iostream>
using namespace std;
long long int binsearch(int no);
double precisesearch(int no,int precision,int tempsol);

int main(){
      int no;
      cout<<"enter the no"<<endl;
      cin>>no;
      int tempsol=binsearch(no); 
      cout<<"answer is "<<precisesearch(no,3,tempsol)<<endl;
      return 0;

}
long long int binsearch(int no){
            int low=0;
            int high=no;
             long long int ans=-1;
            while(low<=high){
                int mid=(low+high)/2;
                long long int square =mid*mid;
                if(square==no){                     //if mid*mid crosses the range of integer then you
                       cout<<mid;                    //will get wrong answer to avoid use long long int
                }
                else if(square<no){
                    ans=mid;                   //it can be my answer so we are storing its value
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return ans;                              
                
}
double precisesearch(int no,int precision,int tempsol){
    
    double factor=1;
    double ans =tempsol;
    
    for(int i=0;i<precision;i++){
              factor=factor/10;
        for(double j=ans;j*j<no;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
