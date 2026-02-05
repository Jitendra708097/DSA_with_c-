#include<iostream>
#include<vector>
using namespace std;

int countHops(int i,int n)
{
    // Base Cases 
    if(i==n)
    return 1;

    if(i>n)
    return 0;

    // general cases 
    int hops = countHops(i+1,n) + countHops(i+2,n) + countHops(i+3,n);
    return hops;
}

// using DP top down approach
int countHop(int i,int n,vector<int>&dp)
{
    // Base Cases 
    if(i == n)
    return 1;

    if(i>n)
    return 0;

    // check hops if calculated
    if(dp[i] != -1)
    return dp[i];

    dp[i] = countHop(i+1,n,dp) + countHop(i+2,n,dp) + countHop(i+3,n,dp);
    return dp[i];
}

int main()
{
    int n;
    cout<<"Enter the stair number: ";
    cin>>n;
     
    // dp 
    // vector<int>dp(n+3,-1);

    // int result = countHops(0,n);
    // int result = countHop(0,n,dp);.

    int first = 1,second = 1,third = 2;

    if(n == 1){
    cout<<"These are steps: 1";
    return 0;
    }

    else if(n == 2){
    cout<<"These are steps: 2";
    return 0;
    }

    int curr;
    for(int i=3;i<=n;i++)
    {
          curr = first + second + third;
          first = second;
          second = third;
          third = curr;
    }
    cout<<"These are the total steps: "<<curr;
}