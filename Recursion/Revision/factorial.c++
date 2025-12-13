#include<iostream>
using namespace std;

// this is resursive version of factorial.
int factorial(int n)
{
    // Base Case 
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
    
return 0;
}

// Now iterative version of factorial.
int iterativeFactorial(int n)
{
    int result = 1;
    
    for(int i=1;i<=n;i++)
    {
        result = result*i;
    }

    return result;
}

int main() 
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // int result = factorial(n);
    // int result = iterativeFactorial(n);

    int result = 1;
    for(int i=1;i<=n;i++)
    {
          result*=i;
    }
    cout<<"Result of factorial: "<<result;
}