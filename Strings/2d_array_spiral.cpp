#include<iostream>
using namespace std;

main()
{
    int a[10][10],m,n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of cols: ";
    cin>>n;

    cout<<"Enter the matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    int rowstart=0, colstart=0, rowend=m-1, colend=n-1;

    while(rowstart<=rowend && colstart<=colend)
    {
        for(int i=colstart;i<=colend;i++)
        {
            cout<<a[rowstart][i]<<" ";
        }
        rowstart++;

        for(int i=rowstart;i<=rowend;i++)
        {
            cout<<a[i][colend]<<" ";
        }
        colend--;


        if(rowstart<=rowend)
        {
            for(int i=colend;i>=colstart;i--)
           {
             cout<<a[rowend][i]<<" ";
           }
           rowend--;
        }

        if(colstart<=colend)
        {
            for(int i=rowend;i>=rowstart;i--)
           {
              cout<<a[i][colstart]<<" ";
           }
           colstart++;
        }
    }

}
