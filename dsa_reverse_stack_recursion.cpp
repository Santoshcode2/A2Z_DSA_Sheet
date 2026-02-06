/User function Template for C++

class Solution{
public:
    void  insert_at_bottom(stack<int> &st,int x){
           if(st.size()==0) st.push(x);
           else{
               int temp=st.top();
               st.pop();
            insert_at_bottom(st,x);
            st.push(temp);
           }
      }
    void Reverse(stack<int> &St){
         if(St.size()>0){
             int x=St.top();
             St.pop();
             Reverse(St);
             insert_at_bottom(St,x);
         }
    }
};