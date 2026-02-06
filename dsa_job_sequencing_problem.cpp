/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/



class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static comp(Job a, Job b){
       return  (a.profit > b.profit);
    }      
       
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       sort(arr,arr+n,comp);
       int maxDeadline=-1;         
       for(int i=0;i<n;i++){
           maxDeadline=max(maxDeadline,arr[i].dead);
       }
        //   int  hash[maxDeadline+1]={-1};
        vector<int> deadlines(maxDeadline+1,-1);
       
      int totProfit=0,cnt=0;
    //   int maxi = arr[0].dead;
      
        for(int i=0;i<n;i++){
            int currDead=arr[i].dead;
            for(int j=arr[i].dead;j>=1;j--){
                if(deadlines[currDead]==-1){
                   deadlines[currDead]=i;
                   cnt++;
                //hash[i]=arr[i].id;
                   totProfit+=arr[i].profit;
                   break;
               }
               currDead--;
           }
       }
       return {cnt,totProfit};
       
    } 
};