#include<iostream>
using namespace std;

int minelement(int *arr,int index,int n)
{
     if(index == n-1)
     {
        return arr[index];
     }

     int Min = min(*(arr+index),minelement(arr,index+1,n));
     return Min;
}

int main()
{
    int arr[] = {100,1,2,58,66,44,66,48,22,86};
    int Min = minelement(arr,0,10);

    cout<<"Minimum element from an array : "<<Min;
}