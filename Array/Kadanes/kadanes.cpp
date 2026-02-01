// Kadane's states that if prefix-sum is negative than make it zero.

// find maaximum sum of any subArray from an array.
// Brute-force method in O(n^3)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {3,4,-5,8,-12,7,6,2};
//     int max_sum = 0;

//     // print all subarrays 
//     for(int i=0;i<8;i++)
//     {
//         for(int j=i;j<8;j++)
//         {
//             int maxi = 0;
//             for(int k=i;k<=j;k++)
//             {
//                 // cout<<arr[k]<<" ";
//                 maxi+=arr[k];
//             }
//             max_sum = max(max_sum,maxi);
//             // cout<<endl;
//         }
//     }

//     cout<<"Maximum sum of subarray: "<<max_sum;

// }


// using prefix-sum in O(n^2);
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {3,4,-5,8,-12,7,6,2};
//     int prefixSum = 0,maxi = 0;

//     for(int i=0;i<8;i++)
//     {
//         prefixSum = 0;
//         for(int j=i;j<8;j++)
//         {
//            prefixSum+=arr[j];
//            maxi = max(maxi,prefixSum);
//         }
//     }

//     cout<<"Maximum sum of a subarray: "<<maxi;
// }

// this is final kadanes algorithm in O(n);
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 8, -12, -17, 6, 2};
    int prefixSum = 0, maxi = 0;

    for (int i = 0; i < 8; i++)
    {
        prefixSum+=arr[i];
        if(prefixSum < 0)
        prefixSum = 0;

        maxi = max(maxi,prefixSum);
    }

    cout << "Maximum sum of a subarray: " << maxi;
}