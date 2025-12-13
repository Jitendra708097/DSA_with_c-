#include<iostream>
using namespace std;

void odd(int n)
{
    if(n <= 1)
    {
        cout<<n;
        return ;
    }
    cout<<n<<" ";
    odd(n-2);
}

int main()
{
    int number;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    if(number%2 == 0 && number>0)
    odd(number-1);
    else
    odd(number);
}