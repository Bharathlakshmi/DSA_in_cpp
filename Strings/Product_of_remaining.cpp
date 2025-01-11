#include<iostream>
#include<string.h>
using namespace std;

main()
{
    int n,a[10],p[10],t=1;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[i]=1;
    }


    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            p[i]=p[i]*a[j];
        }
        for(int j=i-1;j>=0;j--)
        {
            p[i]=p[i]*a[j];
        }
    }

    cout<<"Product except itself : ";
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
