#include<iostream>
using namespace std;

int minelement(int *arr,int index)
{
     if(index == 0)
     {
        return arr[index];
     }

     int Min = min(*(arr+index),minelement(arr,index-1));
     return Min;
}

int main()
{
    int arr[] = {100,1,2,58,66,44,66,48,22,86};
    int Min = minelement(arr,9);

    cout<<"Minimum element from an array : "<<Min;
}