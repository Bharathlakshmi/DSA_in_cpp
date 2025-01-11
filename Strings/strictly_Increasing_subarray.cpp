#include<iostream>
using namespace std;

main()
{
    int n,a[30],p[10],j=0;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[i]=0;
    }


    p[0]=a[0];

     for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
        {
            p[j]=p[j]+a[i];
        }
        else
        {
            j++;
            p[j]=a[i];
        }
    }

/*
    cout<<j<<endl;
     for(int i=0;i<=j;i++)
    {
        cout<<p[i]<<" ";
    }
    */

    int high=p[0];
     for(int i=0;i<=j;i++)
    {
        if(p[i]>high)
            high=p[i];
    }

    cout<<"Sub-array with maximum sum : "<<high;
}











