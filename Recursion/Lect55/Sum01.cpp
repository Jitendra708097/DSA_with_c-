#include<iostream>
using namespace std;

int sum(int arr[],int index,int n)
{
     if(index == n)
     {
        return 0;
     }

     return arr[index]+sum(arr,index+1,n);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int Sum = sum(arr,0,5);
    cout<<"The total sum of array elements is to be : "<<Sum;
}