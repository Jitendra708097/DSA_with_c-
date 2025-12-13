#include<iostream>
using namespace std;

int pow(int n)
{
    if(n == 1)
    {
        return 2;
    }
    
    return 2*pow(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n == 0)
    cout<<"The power 2 is to be : "<<n;
    cout<<pow(n);

}