#include<bits/stdc++.h>
using namespace std;
struct Node{
        Node *links[26];
        bool flag = false;                //there will always be a reference link
       
       
        bool containsKey(char ch){
             return (links[ch - 'a'] != NULL);    //because a=0, b=1 ,c=2 ...
        }
        void put(char ch, Node* node){
            links[ch - 'a'] = node;
        }
        Node* get(char ch){
             return links[ch - 'a'];
        }
        bool setEnd(){
            flag = true;
        }
        bool isEnd(){
            return flag;
        }
}
class Trie {
    private: Node* root; // we definitely require a root

public:
    //constructor
    //anyone creates a constructor he will get a new try for himself
    Trie(){
        root = new Node();
    }


    //insert functionality
    //t.c = O(length of word)
    void insert(string word){
        Node* node = root;     //it is dummy variable which is pointing to the root
        for(int i=0;i<word.size();i++){       //now insert every character in the trie
              //check whether char word[i] exist in my trie or not
              if(!node->containsKey(word[i])){
                   node->put(word[i],new Node()); //if not present then put this word[i] in new reference node
              }
              //move to the reference trie
              node->get(word[i]);
        } // when my loop ends my node will be standing at last reference trie
          node->setEnd();    //can you please set the end that is turn the flag to be true               
    }


    // search a word 
    //t.c = O(len)
    bool search(string word){
          Node* node = root;
          for(int i =0;i<word.length();i++){
             if(!node->containsKey(word[i])){
                return false;
             }
             node = node->get(word[i]);
          }
          return node->isEnd();//  jis reference trie pe khra hai uska flag value return kar de

    }

    //startsWith
    //t.c = O(len)
    bool startsWith(string word){
        Node* node = root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                return false;
             }
              node = node->get(word[i]);
        }
        return true;
    }
};