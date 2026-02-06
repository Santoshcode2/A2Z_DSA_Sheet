class Solution {
public:
     
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
           int m = matrix[0].size(); //no of colms
           int n = matrix.size();    // no of rows
           int left=0 , top=0 , bottom = n-1 , right = m-1 ;
            vector<int>ans;
        while(top<=bottom && left<=right ){
           //left-right-bottom-left-top
           
           for(int i=left; i<=right;i++){
                  ans.push_back(matrix[top][i]);  
           }top++;
           for(int i=top ; i<=bottom ; i++){
                    ans.push_back(matrix[i][right]);
           }right--;
           if(top<=bottom){
               for(int i=right ; i>=left ;i--){
                  ans.push_back(matrix[bottom][i]);
                }bottom--;
           }
           if(left<=right){
               for(int i=bottom ; i>=top ;i--){
                   ans.push_back(matrix[i][left]);
                 }left++;
           }
        }return ans;
    }
};