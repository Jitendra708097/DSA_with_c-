#include<iostream>
using namespace std;

bool BinarySearch(int *arr,int start,int end,int target)
{
    // Base Condition where function stop itself from executing this code 
    if(start>end)
    {
        return 0;
    }
    int mid = start+end-start/2;

    if(*(arr+mid) == target)
     return 1;
    
    else if(*(arr+mid)>target)
    return BinarySearch(arr,start,mid-1,target);

    return BinarySearch(arr,mid+1,end,target);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    cout<<BinarySearch(arr,0,10,target);
}