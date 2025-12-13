#include<iostream>
using namespace std;

int maxelement(int *arr,int index,int n)
{
     if(index == n-1)
     {
        return arr[index];
     }

     int Max = max(*(arr+index),maxelement(arr,index+1,n));
     return Max;
}

int main()
{
    int arr[] = {100,1,2,58,66,44,66,48,22,86};
    int Max = maxelement(arr,0,10);

    cout<<"Minimum element from an array : "<<Max;
}