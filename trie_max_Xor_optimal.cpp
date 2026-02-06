#include<bits/stdc++.h>
using namespace std;
//first create the trie Node
struct Node {
    Node* links[2]; //to represent 0 & 1
    bool containsKey(int bit){
        return (links[bit] != NULL);
    }
    Node* get(int bit){ //can you give me the reference node
         return links[bit];
    }//what if bit doesn't exist
    void put(int bit , Node* node){
         links[bit] = node; 
    }
};
//with respect to node we need a trie
class Trie{
private:
  Node* root; 
        //for thiss trie there will be a constructor
      Trie(){
           root = new Node();
      }
      //in this trie you will have insert
      void insert(int num){
         Node* node = root;
         for(int i = 31;i>=0 ;i--){
                int bit = (num >> i) & 1; //is the ith index set or not
                if(!node->containsKey(bit)){
                      node->put(bit, new Node());
                }
                node = node->get(bit);
         }
      }
public:
     int getMax(int num){
        Node* node = root;
        int maxNum = 0;
        for(int i=31 ;i>=0;i--){
           int bit = (num >> i) & 1;
           //once you got the bit you try to find the opposite bit
           if(node->containsKey(1 - bit)){ // if it doesnot contains the opposite
                maxNum = maxNum | (1<<i); 
                node = node->get(1-bit);
           }
           else{
              node = node->get(bit);
           }
        }
        return maxNum;

     }
};
int maxXOR(int n , int m , vector<int>& arr1, vector<int>& arr2){
    Trie trie;
    for(auto &it: arr1) trie.insert(it);
    int maxi =0;
    for(auto &it: arr2){
        maxi = max(maxi, trie.getMax(it));
    }
}