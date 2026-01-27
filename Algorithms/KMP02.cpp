// KMP stands for Knuth Morris Pratt.

// Find longest prefix suffix from string.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str = "abcabdabcabcabd";
    vector<int>lps(str.size(),0);

    int prefix = 0,suffix = 1;

    while(suffix < str.size())
    {
        if(str[prefix] == str[suffix])
        {
            lps[suffix] = prefix+1;
            prefix++, suffix++;
        }
        else
        {
            if(prefix == 0)
            {
                suffix++;
            }
            else
            {
                prefix = lps[prefix-1];
            }
        }
    }

    cout<<"length of longest prefix and suffix: "<<lps[str.size()-1];
}