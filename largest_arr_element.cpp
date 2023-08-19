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

    int large=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout<<"\Largest element is :"<<large;
}
