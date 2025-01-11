#include<iostream>
#include<string.h>
using namespace std;

main()
{
    char s1[15],s2[15],f[10];
    int a[10];
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;

    int m,n,t,c=0,j=0;
    m=strlen(s1);
    n=strlen(s2);

    (m<n)?t=m:t=n;
    //cout<<"t"<<t<<endl;

    for(int i=0;i<t;i++)
    {
        if(s1[i]==s2[i])
        {
            c++;

            a[j]=i;
            f[j]=s1[i];
            j++;
        }
    }

    cout<<"No. of combos matching : "<<c<<endl;
    cout<<"Matching characters : "<<endl;
    cout<<"Index "<<"value"<<endl;

    for(int i=0;f[i]!='\0';i++)
    {
       cout<<a[i]<<"   -   ";
       cout<<f[i]<<endl;
    }

}
