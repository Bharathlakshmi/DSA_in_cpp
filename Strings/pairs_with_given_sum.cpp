#include<iostream>
#include<string.h>
using namespace std;

main()
{
    int n,a[10],k,c=0;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"Enter K : ";
    cin>>k;
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
          if((a[i]+a[i+1])==k)
            c++;
    }
    cout<<c*2;

}
