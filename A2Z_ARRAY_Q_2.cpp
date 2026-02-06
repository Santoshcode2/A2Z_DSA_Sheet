int print2largest(int arr[], int n){
     
     int Slargest=secondlargest(arr,n);
     int  Ssmallest= secondSmallest(arr,n);
     
     return (Slargest,Ssmallest);
    
}
int secondlargest(int arr[],int n){
    int largest=arr[0];
     int SecLargest=INT_MIN;
     for(int i=1;i<n;i++){
          if(arr[i]>largest){
            SecLargest=largest;
            largest=arr[i];
          }else if(arr[i]<largest && arr[i]>SecLargest){
                     SecLargest=arr[i];
              }
          
     }return SecLargest;
}
int secondSmallest(int arr[],int n){
      int smallest=arr[0];
      int secSmallest=INT_MAX;
      for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secSmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]!=smallest && arr[i]<secSmallest){
            secSmallest=arr[i];
        }
      }return secSmallest;

}
//T.C=O(N) & S.C=O(1);