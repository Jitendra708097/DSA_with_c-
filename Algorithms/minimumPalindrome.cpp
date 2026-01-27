// Check to how many minimum characters need to make string palindrome.
// Brute Force.
#include<iostream>
using namespace std;

// function to check whether string is palindrome or not return 1 if palindrome otherwise 0.
int checkPalindrome(string s, int &start, int &end)
{
    while(start<end)
    {
        if(s[start] != s[end])
        {
            return 0;
        }
        else
        {
            start++,end--;
        }
    }
    return 1;
}


int main()
{
  string s;
  cout<<"Enter the string: ";
  cin>>s;
//   string s2 = "";
  int count = 0,start = 0, end = 8;

  while(end>0)
  {
     int result = checkPalindrome(s,start,end);

     if(result == 1)
     {
        cout<<"Minimun char to make palindrome: "<<count;
        return 0;
     }
     else
     {
        // s2 = s2+s[end];
        count++;
        end--;
     }
  }
  cout << "Minimun char to make palindrome last: " << count-1;
}