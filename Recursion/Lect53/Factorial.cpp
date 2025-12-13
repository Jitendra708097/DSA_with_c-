/* to find factorial using recrusion */
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n == 1 || n == 0)
      return 1;

    int n1 = n*factorial(n-1);
    return n1;
}
int main()
{
    int  num,ans;
    cout<<"Enter the number : ";
    cin>>num;
    ans = factorial(num);
    cout<<"The answer is to be : "<<ans;
}
