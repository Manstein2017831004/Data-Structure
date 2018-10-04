#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={12,545,65,3,23,656,765,46,673,332,132,43,56,768,674,33,1,234,456,231,354,67,564,34,5};
    sort(a,a+25);
    int low=0;
    int high=(sizeof(a)/sizeof(a[0]));
    int mid,n;
    cout<<"Please enter the number you want to find:";
    cin>>n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==n)
        {
            cout<<"Number found";
            return 0;
        }
        else if(a[mid]<n)
        {
           low=mid+1;
        }
        else if(a[mid]>n)
        {
            high=mid-1;
        }
    }
    cout<<"Number is not found";
    return 0;
}
