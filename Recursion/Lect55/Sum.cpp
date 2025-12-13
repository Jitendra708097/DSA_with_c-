#include<iostream>
using namespace std;

void Sum(int arr[],int &sum,int index)
{
    if(index == -1)
    {
        return ;
    }

    Sum(arr,sum,index-1);
    sum+=arr[index];
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    Sum(arr,sum,9);

    cout<<"The sum of array elements : "<<sum;
}