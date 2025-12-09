// if your current running sum becomes negative reset it to 0,
// otherwise keep adding .

#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {-1,5,6,-2,-7,10,11,-12,5,15};
    int current_sum=0,max_sum=-1;

    for(int i=0;i<10;i++)
    {
        current_sum+=arr[i];
        max_sum = max(current_sum,max_sum);
        if(current_sum<0)
        current_sum = 0;
    }

    cout<<"The max sum of any subarray: "<<max_sum;
}