//Program to check whether array is sorted or not.

#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"\nEnter the array count : ";
    cin>>n;

    int arr[n];
    cout<<"\nArray element are : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
        }
        else
        {
            return false;
        }

    }
    return true;
}
