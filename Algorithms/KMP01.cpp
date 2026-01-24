// Longest prefix and suffix equal length.
// Bruteforce approach to find all prefix and suffix.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> prefix,suffix;

    string str = "abcabdabcabcabd";

    // find all prefix from this string.
    for(int i=0;i<14;i++)
    {
        string temp;
        for(int j=0;j<=i;j++)
        {
            temp+=str[j];
        }
        prefix.push_back(temp);
        // cout<<"The prefix of string: "<<temp<<endl;
    }

    // find all suffix from this string
    for (int i = 1; i<15; i++)
    {
        string temp;
        for (int j = i; j<15; j++)
        {
            temp += str[j];
        }
        suffix.push_back(temp);
        // cout << "The suffix of string: " << temp << endl;
    }

    // compare and find longest common prefix and suffix.
    int j = 13;
    int len = 0;
    for(int i=0;i<14;i++)
    {
        if(prefix[i] == suffix[j])
        {
            j--;
            cout<<"Longest common prefix and suffix: "<<prefix[i]<<endl;
        }
        else{
            j--;
        }
    }
}
