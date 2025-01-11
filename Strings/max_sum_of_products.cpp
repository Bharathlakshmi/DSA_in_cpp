#include<iostream>
#include<bits.h>
#include<stdio.h>
using namespace std;

void sortt(int* a,int n);

main()
{
    int n,c[10],b[10],sum=0,pr[10];

    cout<<"Enter N : ";
    cin>>n;

    cout<<"Enter array 1 : ";
    for(int i=0;i<n;i++)
        cin>>c[i];

    cout<<"Enter array 2 : ";
    for(int i=0;i<n;i++)
        cin>>b[i];

    sortt(c,n);
    sortt(b,n);

   /* for(int i=0;i<n;i++)
    {
      cout<<c[i];
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
      cout<<b[i];
    }*/


    for(int i=0;i<n;i++)
    {
      pr[i]=b[i]*c[i];
      sum=sum+pr[i];
    }

    cout<<"Maximum sum of products : "<<sum;


}

void sortt(int *a,int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    }
   //return a[0];
}
