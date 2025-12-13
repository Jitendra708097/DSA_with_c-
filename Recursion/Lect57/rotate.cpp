#include<iostream>
using namespace std;

void rotate(int *arr,int start,int n)
{
    if(start == n)
    {
        return ;
    }
    
    int temp = *(arr+start);
    *(arr+start) = *(arr+start+1);
    *(arr+start+1) = temp;

    rotate(arr,start+1,n);
}

int main()
{
    int arr[] = {12,3,4,5,6,7,8,9,10};
    cout<<"Before rotation of array by one position : "<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    rotate(arr,0,8);
    
    cout<<"After rotaion complete of array element : "<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<*(arr+i)<<" ";
    }

}