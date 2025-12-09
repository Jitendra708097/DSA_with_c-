// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,check=0;
//     cout<<"Enter the number : \n";
//     cin>>n;
//     int reverse=0,orignal_number=n,s;
//     while(n != 0)
//     {
//         s = n%10;
//         reverse = reverse*10+s;
//         n/=10;
//     }

//     if(orignal_number == reverse)
//     {
//         cout<<"Number is palindrome \n";
//     }
//     else
//     {
//         cout<<"Number is not palindrome \n";
//     }
// }



// This is second method 
#include<iostream>
using namespace std;

int reverse(int number,int temp)
{
    while (number)
    {
        int digit = number%10;
        temp = temp*10+digit;
        number = number/10;
    }
    return temp;
}

int main()
{
    int number,temp=0;
    cout<<"Enter the number: ";
    cin>>number;

    if(number == reverse(number,temp))
    cout<<"it is a palindrome number.";
    else
    cout<<"it is not a palindrome number.";
}