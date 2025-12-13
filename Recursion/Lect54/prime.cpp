// print all prime numbers between 1 to n using recrusion
#include<iostream>
using namespace std;

void prime(int start,int n)
{
    if(start == n)
    {
        return ;
    }

    int count = 0;
    for(int i=2;i<start;i++)
    {
        if(start%i == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    if((start-2) == count)
    {
        cout<<"This number is a prime number : "<<start<<endl;
    }

    prime(start+1,n);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    prime(1,n);
}