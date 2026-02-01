// Add two large numbers in the form of string.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s1 = "3";
    string s2 = "000000000005";

    int index1 = s1.length()-1,index2 = s2.length()-1;
    string sum;

    int carry = 0;

    while (index1>=0 && index2>=0)
    {
        int n = (s1[index1] - '0') + (s2[index2] - '0') + carry;
        carry = n/10;
        char c = n%10 + '0';
        sum = sum + c;
        index1--,index2--;
    }

    // for if string first is left.
    while (index1 >= 0)
    {
        int n = (s1[index1] - '0')  + carry;
        carry = n / 10;
        char c = n % 10 + '0';
        sum = sum + c;
        index1--;
    }

    // for second string.
    while (index2 >= 0)
    {
        int n = (s2[index2] - '0') + carry;
        carry = n / 10;
        char c = n % 10 + '0';
        sum = sum + c;
        index2--;
    }

    // check if carry exits.
    if(carry)
    {
        char c = carry + '0';
        sum = sum+c;
    }

    // reverse string for ans.
    reverse(sum.begin(),sum.end());

    int i =0;
    while (sum[i] == '0')
    {
        sum.erase(i,1);
    }
    

    cout<<"The sum of these numbers: "<<sum;
}