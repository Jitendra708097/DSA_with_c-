// To find a s2 string in s1 string where s1 is circular string.
// So I am applying brute force approach to find string.

#include<iostream>
using namespace std;
int main()
{
    string s1 = "aadcabcd";
    string s2 = "bcd";

    s1 = s1 + s1;
    int index1 = 0, index2 = 0;

   for(int i=0;i<=13;i++)
   {
    index1 = i;
    while(index2<3 && index2<=index1)
    {
        if(s1[index1] == s2[index2])
        {
            index1++;
            index2++;
        }
        else
        {
            index2 = 0;
            break;
        }
    }

    if (index2 == 3)
    {
        cout<<"String matching successfully:";
        return 0;
    }
   }

   cout << "S2 string is not present in s1 string.";
}