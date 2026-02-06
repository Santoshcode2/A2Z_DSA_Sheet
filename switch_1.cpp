#include<iostream>
using namespace std;
int main(){
    long long int n,rev=0,c=0;
    cout<<"enter ph no: ";
    cin>>n;
    while(n!=0){
       long long int r=n%10;
        rev=rev*10+r;
        n=n/10;
        c++;
    }if(c<10|c>10){
        cout<<"invalid ph no. ! \n";
        

    }
       cout<<"rev "<<rev<<endl;
        while(rev!=0){
            long long int a=rev%10;
            rev=rev/10;
            switch(a){
                case 0:cout<<"zero ";break;
                case 1:cout<<"one ";break;
                case 2:cout<<"two ";break;
                case 3:cout<<"three ";break;
                case 4:cout<<"four ";break;
                case 5:cout<<"five ";break;
                case 6:cout<<"six ";break;
                case 7:cout<<"seven ";break;
                case 8:cout<<"eight ";break;
                case 9:cout<<"nine ";break;
                default:cout<<"try again ! "; break;
            }
        }
    return 0;
}
        
