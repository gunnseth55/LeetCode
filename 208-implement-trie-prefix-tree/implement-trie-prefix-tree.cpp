class TrieNode{
    
    public:
    char data;
    bool isTerminal;
    TrieNode *children[26];
    TrieNode(char c){
        data=c;
        isTerminal=false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }
};
class Trie {
public:
    TrieNode *root;
    Trie() {
        root=new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word, int i){
        if(word.length()==i){
            root->isTerminal=true;
            return;
        }
        word[i]=toupper(word[i]);
        int index=word[i]-'A';
        TrieNode *child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }else{
            child=new TrieNode(word[i]);
            root->children[index]=child;
        }
        insertUtil(child,word,i+1);
    }
    void insert(string word) {
        insertUtil(root,word,0);
    }
    
    bool searchUtil(TrieNode *root, string word, int i){
        if(word.length()==i){
           return root->isTerminal;
        }
         word[i]=toupper(word[i]);
        int index=word[i]-'A';
       
        TrieNode *child;
        
        if(root->children[index]!=NULL){
            child=root->children[index];
        }else{
            return false;
        }
       return searchUtil(child,word,i+1);
    }
    bool search(string word) {
        return searchUtil(root,word,0);
        
    }
    bool startswithUtil(TrieNode *root, string word, int i){
        if(word.length()==i){
            return true;
        }
         word[i]=toupper(word[i]);
        int index=word[i]-'A';
       
        TrieNode *child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }else{
            return false;
        }
       return startswithUtil(child,word,i+1);
    }
    bool startsWith(string prefix) {
        return startswithUtil(root,prefix,0);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */