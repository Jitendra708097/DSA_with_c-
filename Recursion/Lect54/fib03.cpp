#include<iostream>
using namespace std;

void fib(int n,int first,int second)
{
    if(n == 1)
    {
        // cout<<"1"<<" ";
        return ;
    }
    int curr = first + second;
     first = second;
     second = curr;

     cout<<curr<<" ";
     fib(n-1,first,second);
}

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int first = 0,second = 1;
    cout<<first<<" "<<second<<" ";
    fib(n,first,second);
}