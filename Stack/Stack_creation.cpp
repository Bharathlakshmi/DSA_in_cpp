
#include<iostream>
using namespace std;
int a[10],n,top=-1;
void push();
void pop();
void display();
main()
{
    int ch;
    cout<<"Enter the n value : ";
    cin>>n;
    do{
    cout<<"1.push \n2.pop \n3.Display\n4.Exit     choice: ";
    cin>>ch;
      switch(ch)
      {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: display();
      }
    }while(ch!=4);
}
void push()
{
    int val;
    if(top==n-1)
    {
        cout<<"Stack overflow\n";
    }
    else
    {
        cout<<"Enter a value : ";
        cin>>val;
        top=top+1;
        a[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow\n";
    }
    else
    {
        a[top]=-1;
        top=top-1;
    }
}
void display()
{
    cout<<"Data in Stack is : ";
    for(int t=top;t>-1;t--)
    {
        cout<<a[t]<<" ";
    }
    cout<<endl;
}
