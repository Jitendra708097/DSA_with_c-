#include<iostream>
using namespace std;

void Reverse(int *arr,int start,int end)
{
    if(start>=end)
    {
        return ;
    }

    int temp = *(arr+start);
    *(arr+start) = *(arr+end);
    *(arr+end) = temp;

    Reverse(arr,start+1,end-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"Before reversing the array elements : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    Reverse(arr,0,9);
 
    cout<<"After reverse the array elements : "<<endl;
    for(int i=0;i<10;i++)
    {
          cout<<*(arr+i)<<" ";
    }
}