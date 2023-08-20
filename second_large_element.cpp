//Program to find second largest element.

#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"\nEnter the array count : ";
    cin>>n;

    int arr[n];

    int largest=arr[0];
    cout<<"\nArray elements are : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"\nLargest element is : "<<largest;

    int slargest=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
        }
    }
    cout<<"\nSecond largest element is : "<<slargest;
}
