#include<iostream>
using namespace std;

void coderArmy(int n)
{
    if(n == 0)
    {
        return ;
    }
    cout<<"Coder Army"<<endl;
    coderArmy(n-1);
}

int main()
{
    int n = 10;
    coderArmy(10);
}