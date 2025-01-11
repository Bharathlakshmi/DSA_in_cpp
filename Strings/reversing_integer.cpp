#include<iostream>
using namespace std;

main()
{
    int n,t,rev=0;
    cout<<"Enter integer : ";
    cin>>n;
    while(n>0)
    {
        t=n%10;
        rev=(rev*10)+t;
        n=n/10;
    }
    cout<<"Reversed Number : "<<rev;
}
