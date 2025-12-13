
// this function print all number between 1 and n 
#include<iostream>
using namespace std;

void odd(int number)
{
    if(number == 1)
    {
        cout<<number<<" ";
        return ;
    }

    odd(number-1);
    if(number%2 != 0)
    cout<<number<<" ";
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    odd(n);
}