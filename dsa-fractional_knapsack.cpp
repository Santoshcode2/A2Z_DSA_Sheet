
bool cmp(Item a, Item b){
    return (a.value/(a.weight*1.0) >  b.value/(b.weight*1.0));
}

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
            sort(arr,arr+n,cmp);
            double totalVal=0.0;
            for(int i=0;i<n;i++){
                if(arr[i].weight<=w){
                    totalVal+=arr[i].value;
                    w=w-arr[i].weight;
                }
                else{
                    //fractional part chahiye
                    totalVal+=(arr[i].value/(arr[i].weight*1.0))*w;
                    break;
                }
            }
            return totalVal;
    }
};