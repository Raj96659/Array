#include<iostream>
using namespace std;
void move_end(int arr[],int n)
{
    int j=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
main()
{
    int n;
    cout<<"\nEnter the count for array : ";
    cin>>n;

    int arr[n];
    cout<<"\nArray elements are : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    move_end(arr,n);

    cout<<"\nModified array by moving all zero to last : ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
