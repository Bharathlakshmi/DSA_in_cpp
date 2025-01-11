#include<iostream>
using namespace std;

main()
{
    int a[20],n,b[10],c[10],j=0;

    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    for(int i=n-1;i>=0;i--)
    {
       if(a[i]<=a[i-1])
       {
           b[j]=a[i];
           j++;
       }
       else
       {
           b[j]=a[i];
           j++;
           break;
       }
    }


   /* for(int i=0;i<j;i++)
    {
       cout<<b[i]<<" ";
    }*/

    //reverse
    for(int i=0,k=j-1;i<j;i++,k--)
    {
       c[i]=b[k];
      // cout<<c[i]<<" ";
    }
    cout<<endl;

    int pivot=n-j-1,succ;

    if(pivot==-1)
    {
        for(int i=n-1;i>=0;i--)
      {
          cout<<a[i]<<" ";
      }
      return 0;
    }

    for(int i=n-1;i>pivot;i--)
    {
       if(a[pivot]<a[i])
       {
           succ=i;
           break;
       }
    }

   // cout<<"pivot and succ"<<a[pivot]<<" "<<a[succ];

    //swapping

    int t=a[pivot];
    a[pivot]=a[succ];
    a[succ]=t;

    //reverse suffix

    for(int i=pivot+1,k=0;i<n;i++)
    {
        b[k]=a[i];
        k++;
    }
    for(int i=0,k=j-1;i<j;i++)
    {
       c[i]=b[k];
       k--;
    }

    for(int i=pivot+1,k=0;i<n;i++)
    {
       a[i]=c[k];
       k++;
    }


    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }



}
