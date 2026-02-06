int longestSubArrayWithSumK(vector<int>arr,long long k){
    //note that k is given in long long form 
    map<long long, int>mpp;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<arr.size();i++){
         sum+=arr[i];
         if(sum==k){
            maxlen=max(maxLen,i+1);
         }
         long long rem=abs(sum-k);
         //i will check whether rem exist in my map or not
         //if my map is having remaining means it will not point to end
         if(mpp.find(rem)!=mpp.end()){
              int len=i-mpp[rem];
              maxLen=max(maxLen,len);
         }/*was the sum previously not there in hash map if it was not there previously then just put it*/ 
         if(mpp.find(sum)==mpp.end()){
                 mpp[sum]=i;
         }

    } return maxLen;
}
// it is correct  for positive  & negative & array containing zero 
          
  