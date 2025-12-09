#include<iostream>
using namespace std;

class TrieNode
{
    public:
    TrieNode *child[26];
    bool endOfWord;

    TrieNode()
    {
        endOfWord = false;
        for( int i=0; i<26; i++)
        {
            child[i] = NULL;
        }
    }

};

class Trie
{
    TrieNode *root;

    public:

    Trie()
    {
        root = new TrieNode();
    };

    void insert(  string word)
    {
        TrieNode *node = root;
        for( char c: word)
        {
            int index = c-'a';
            // cout<<"Chars: "<<c<<endl;
            if(node -> child[index] == NULL)
            {
                node -> child[index] = new TrieNode();
                node = node -> child[index];
                cout<<"The Characters from : "<<node->child[index]<<endl;
            }
            else
            {
                node = node -> child[index];
                cout << "The Characters : " << node->child[index] << endl;
            }
        }
        node -> endOfWord = true;
    }

    bool search(string word)
    {
        TrieNode *node = root;
        for(char c: word)
        {
            int index = c-'a';
            if(node -> child[index] == NULL)
            {
                return 0;
                node = node -> child[index];
            }
        }

        return node -> endOfWord;
    }
};

int main()
{
    Trie *tree = new Trie();
    tree->insert("apple");
    // tree->insert("appex");
    // tree->insert("moon");
    // tree->insert("almond");
    // tree->insert("monday");

    cout<<"Data is searching in array: "<<tree->search("apple");
    return 0;
}