#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"\nEnter the array count : ";
    cin>>n;

    int num;
    cout<<"\nElement to search : ";
    cin>>num;

    int arr[n];

    cout<<"\nArray elements are : ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nElement is present at index : ";
    cout<<linear_search(arr,n,num);

    return 0;
}
