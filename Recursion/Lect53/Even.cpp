// print all even numbers from 1 to n;
#include<iostream>
using namespace std;

void PrintEven(int number)
{
    if(number == 2)
    {
        cout<<number<<" ";
        return ;
    }
   PrintEven(number-1);
   if(number%2 == 0)
    cout<<number<<" ";
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    PrintEven(n);
}