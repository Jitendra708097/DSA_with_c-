#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s1 = "ABABCABAB";
    int first = 0, second = 1;
    vector<int>lps(9,0);
    while(second<9)
    {
        if(s1[first] == s1[second])
        {
            lps[second] = first+1;
            first++,second++;
        }
        else
        {
           if(first == 0)
           {
                second++;
           }
           else
           {
            first = lps[first-1];
           }
        }
    }

    cout<<"Longext prefix suffix of this string: "<<endl;
    for(int j=0;j<9;j++)
    {
        cout<<lps[j]<<" ";
    }
}