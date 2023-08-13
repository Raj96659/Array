/*

  Array element is : 1 3 5 7 9
  Reverse element is : 9 7 5 3 1

*/

#include<iostream>
using namespace std;
main()
{
    int arr[5],i;

    cout<<"\nEnter the array elements :";

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nReverse array elements is :";

    for(i=4;i>=0;i--)
    {
        cout<<" "<<arr[i];
    }
}
