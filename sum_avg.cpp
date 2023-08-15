// Accept 5 array element and print their summation and average.

#include<iostream>
using namespace std;
main()
{
    int i,n,sum,avg;
    sum=0;

    cout<<"\nEnter the number of array element to print :";
    cin>>n;
    int arr[n];

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<"\nSummation is :"<<sum;
    avg=sum/n;
    cout<<"\nAverage is :"<<avg;
}
