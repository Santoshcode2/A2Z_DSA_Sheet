#include<bits/stdc++.h>
using namespace std;

//first we need to create a trie
struct Node{
    Node* links[26];
    bool flag = false;

    bool containsKey(char ch){
        return links[ch - 'a']; //a=0 , b=1 ,c=2,....
    }

    //give me the reference trie
    Node* get(char ch){
        return links[ch - 'a'];
    }

    void put(char ch, Node* node){
        links[ch - 'a'] = node;
    }

    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
};

class Trie{
    private: Node* root;
    public:
    //constructor
    Trie(){
          root = new Node();
    }
    public:
    void insert(string word){
          Node* node = root;
          for(int i=0;i<word.size();i++){
               if(!node->containsKey(word[i])){
                     node->put(word[i],new Node());
               }
               node = node->get(word[i]);
          }
          node->setEnd();
    }

    public:
    bool checkIfPrefixExists(string word){
        bool flag = true;
        Node * node = root;
        for(int i=0;i<word.length();i++){
            if(node->containsKey(word[i])){
                 node = node->get(word[i]);
                 if(node->isEnd()== false) return false;
            }
            return false;
        }
        return true;
    }
};
string compltetString(int r , vector<string> & a){
       Trie trie;  //object of trie is created
       for(auto &it: a){
          trie.insert(it);
       }
       string longest = "";
       for(auto & it: a){
         if(checkIfPrefixExists(it)){        
            if(it.length() > longest.length()){
                longest = it;
            }
            else if(it.length() == longest.length() && it<longest){
               longest = it;
          }
       }
       }
       if(longest == "") return "None";
       return longest;
       
}