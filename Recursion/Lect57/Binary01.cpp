// Binary on non increasing array using recursion
#include<iostream>
using namespace std;

bool Binary(int *arr,int start,int end,int target)
{
    if(start>end)
    {
        return 0;
    }

    int mid = start+(end-start)/2;
    if(*(arr+mid) == target)
    return 1;

    else if(*(arr+mid)<target)
    return Binary(arr,start,mid-1,target);

    return Binary(arr,mid+1,end,target);
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    cout<<Binary(arr,0,10,target);
}