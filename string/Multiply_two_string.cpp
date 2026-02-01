// Multiply two strings .
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s1 = "00000";
    string s2 = "241";
    vector<vector<int>> digit(s2.length(),vector<int>(s1.length()+s2.length(),0));

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         cout<<digit[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int decimal = 0;
    int index,in=0;;
    for (int i = s2.length()-1; i >= 0; i--)
    {
        index = (s1.length() + s2.length() - 1) - in;
        decimal = 0;
        for (int j = s1.length() - 1; j >= 0; j--)
        {
            int n = (s1[j] - '0') * (s2[i] - '0') + decimal;
            decimal = n/10;
            digit[in][index] = n%10;
            index--;
        }
        digit[in][index] = decimal;
        in++;
    }

    string ans = "";
    int carry = 0;
     index = (s1.length() + s2.length() - 1);
    for(int i=index;i>=0;i--)
    {
        int sum = 0;
        //  carry = 0;
        for(int j=0;j<s2.length();j++)
        {
            sum = sum + digit[j][i];
        }
        sum += carry;
        carry = sum / 10;
        char c = sum%10 + '0';
        ans+=c;

    }
    if(carry)
    {
        carry = carry + '0';
        ans += carry;
    }

// 0 0 8 9 9 9 9 1 
// 0 8 9 9 9 9 1 0
// 8 9 9 9 9 1 0 0
    

    // remove zeros from starting.
    int index1 = 0;
    while(ans[index1] == '0')
    {
        ans.pop_back();
        // index1++;
    }
    // reverse the calculated string for correct answer.
    reverse(ans.begin(),ans.end());
    cout<<"answer: "<<ans<<endl;

    for(int i=0;i<s2.length();i++)
    {
        for(int j=0;j<s1.length()+s2.length();j++)
        {
            cout<<digit[i][j]<<" ";
        }
        cout<<endl;
    }
}