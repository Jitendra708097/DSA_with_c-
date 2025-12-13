// To applying recursion in linear search
#include<iostream>
using namespace std;

bool LinearSearch(int *arr,int index,int n,int target)
{
    if(index == n)
    {
        return 0;
    }

    if(*(arr+index) == target)
    return 1;

    return LinearSearch(arr,index+1,n,target);
} 

int main()
{
    int arr[] = {1,2,354,5,6324,654,3,7};
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    cout<<LinearSearch(arr,0,8,target);
}