#include<iostream>
using namespace std;
void solve(int arr[],int n)
{
    int temp[n];

    for(int i=1;i<n;i++)
    {
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];

    cout<<"\nLeft rotate the array by one is : ";

    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}
main()
{
    int n;
    cout<<"\nEnter the array count : ";
    cin>>n;

    int arr[n];

    cout<<"\nOriginal array elements are : ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n);
}
