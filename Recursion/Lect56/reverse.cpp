// reverse string using recursion
#include<iostream>
using namespace std;

void Reverse(string &str,int start,int end)
{
     if(start>=end)
     {
        return ;
     }

     char c = str[start];
     str[start] = str[end-1];
     str[end-1] = c;
     Reverse(str,start+1,end-1);
}


int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"this is not reverse : "<<str<<endl;
    Reverse(str,0,str.length());
    cout<<"String has reversed : "<<str;
}