#include<iostream>
using namespace std;

// this is recursive approach for calculate base and exponent;
int power(int base,int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    else
    {
        return (base*power(base,exponent-1));
    }

return 0;
}

// iterative approach.
int testPower(int base,int exponent)
{

    int result = 1;
    for(int i=0;i<exponent;i++)
    {
          result = result*base;
    }

return result;
}

int main()
{
    int base,exponent;
    cout<<"Enter the base value: ";
    cin>>base;
    cout<<"Enter the exponent value: ";
    cin>>exponent;

    int result = power(base,exponent);
    cout<<"This is desired result: "<<result;
}