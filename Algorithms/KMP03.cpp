// Search s1 string from s2 string by Naive approch.
// s1: "ABCDEFGHI";
// s2: "CDEF"
#include<iostream>
using namespace std;
int main()
{
    string s1 = "ABCDEFGHI";
    string s2 = "CDEF";

    int second = 0;
    for(int i=0;i<5;i++)
    {
        int first = i;
        while(second<4)
        {
            if(s1[first] == s2[second])
            {
                first++,second++;
            }
            else
            {
                second = 0;
                first++;
            }
        }

        if(second == 4)
        {
        cout<<"First index: "<<first-second;
        return 0;
        }
    }

    cout<<"Not present in this.";
}
