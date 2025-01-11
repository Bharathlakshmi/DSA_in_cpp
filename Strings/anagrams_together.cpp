
#include<iostream>
using namespace std;
#include<string.h>
#include <bits/stdc++.h>

void sortt(char *a,int m);
main()
{
    int n;
    char duparray[20][8], s[20][8];
    int indexu[20];
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter Strings : ";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        strcpy(duparray[i],s[i]);
    }

    int m;
    for(int i=0;i<n;i++)
    {
         m=strlen(duparray[i]);
         sortt(duparray[i],m);
    }

 //sorted ^

    int tp,p=0,countt=0;


    for(int i=0;i<n;i++)
    {
        for(int z=0;z<p;z++)
        {
            if(i==indexu[z])
                countt=1;
        }
        if(countt==1)
        {
            i++;
        }
        countt=0;

        indexu[p]=i;
        p++;
       // cout<<"indexuhh"<<"-"<<i<<" ";

        for(int j=i+1;j<n;j++)
        {
            if(strcmp(duparray[i],duparray[j])==0)
            {
                indexu[p]=j;
                p++;
            }
        }

        if(p==n)
            break;
    }

    cout<<endl;
    int g;
    for(int i=0;i<p;i++)
    {
         g=indexu[i];
        cout<<s[g]<<" ";
    }
     cout<<endl;
}

 void sortt(char *a,int m)
{
    char t;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    }

}
