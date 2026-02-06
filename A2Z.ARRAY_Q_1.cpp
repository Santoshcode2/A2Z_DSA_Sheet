int largest(vector<int>&arr,int n){
    int cnt=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>cnt){
            cnt=arr[i];
        }
    }
    return cnt;

}