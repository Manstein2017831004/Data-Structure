#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    cout<<"Please enter how many numbers you want to put:";
    int n,b,p;
    cin>>n;
    cout<<"Now enter the numbers:"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" ";
        cin>>a[i];
        //cout<<endl;
    }
    cout<<"Please enter the number you want to search:";
    cin>>b;
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==b)
        {
            cout<<"We got the number and it is in "<<i<<" index.\n \n"<<endl;
            p=b;
        }

        if(i==n && p==b)
        {
            return 0;

        }
    }
    cout<<"We don't get the number\n \n";
    return 0;

}
