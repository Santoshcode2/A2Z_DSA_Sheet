#include<bits/stdc++.h>
using namespace std;
  void divisorOfNum(int num);

    // void divisorOfNum(int num){
    //    //BRUTE FORCE --> T.C =O(N) & S.C=O()it is variable 
    //    vector<int>ans;
    //    for(int i=1;i<=num;i++){
    //       if(num%i==0){
    //         ans.push_back(i);
    //       }
    //    }
    //   for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    //   }

    // }

    //OPTIMAL APPROACH -->T.C=O(sqrt(N)) && S.C=O()

    void divisorOfNum(int num){
       vector<int>ans;
       for(int i=1;i<=sqrt(num);i++){
            if(num%i==0){
                ans.push_back(i);
              
                if(num/i !=i) ans.push_back(num/i);
            }
       }
         for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
      }

    }


int main(){
    cout<<"divisor of num:    ";
    divisorOfNum(8);
    return 0;
}
