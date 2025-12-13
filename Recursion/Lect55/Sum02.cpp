
// The sum of all elements of array using only two arguments

#include<iostream>
using namespace std;

int sum1(int arr[],int index)
{
    if(index == -1)
    {
        return 0;
    }

    return sum1(arr,index-1)+arr[index];
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int sum = sum1(arr,4);

    cout<<"The sum elements of array is to be : "<<sum;
}
