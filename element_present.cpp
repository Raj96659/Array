//check whether array element are present in number or not.
// note- problem is not working if array element is greater then present digit in number

#include<iostream>
using namespace std;
main()
{
    int i,n,r,flag,num,num1;

    cout<<"\nEnter the number of array element :";
    cin>>n;

    cout<<"\nEnter the number :";
    cin>>num;

    int arr[n];

    flag=0;
    cout<<"\nArray elements are :";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        r=num%10;
        if(r==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"\nElement is present ";
    }
    else
    {
        cout<<"\nElement is not present";
    }
}
