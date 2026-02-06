class Solution {
public:
    string LeftRotate(string & s){
        char strt=s[0];
        for(int i=1;i<s.size();i++){
            s[i-1]=s[i];
        }s[s.size()-1]=strt;
          return s;
    }

    bool rotateString(string s, string goal) {
         if(s.size()!=goal.size()) return false;
         if(s==goal)return true;
         for(int i=0;i<s.size()-1;i++){
               if(LeftRotate(s)==goal) return true;

         } return false;

    }
};//t.c=o(n*2) & s.c=O(1)