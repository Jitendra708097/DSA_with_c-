// remove all duplicates from sorted array.
#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,4,5,6,7,8,8};
    int first =0,second=1;
    while(second<10)
    {
        if(arr[first] == arr[second])
        {
            arr[first] = 0;
            first = second;
            second++;
        }
        else
        {
            second++,first++;
        }
    }

    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
}