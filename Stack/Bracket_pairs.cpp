
#include<iostream>
using namespace std;
#include<string.h>

int top=-1;
char b[20];


void push(char val);
char pop();
int ischeck(char *a,int n);

main()
{
    char a[20];
    int n;
    cout<<"Enter the array : ";
    cin>>a;
    n=strlen(a);

    if(ischeck(a,n)==0)
        cout<<"BALANCED\n";
    else
        cout<<"NOT BALANCED\n";

}

int ischeck(char *a,int n)
{
    char symbol;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='[' || a[i]=='(' || a[i]=='{')
        {
            push(a[i]);
        }

        if(a[i]=='}')
        {
            symbol=pop();
            if(symbol=='[' || symbol=='(')
                return 1;
        }
        if(a[i]==']')
        {
            symbol=pop();
            if(symbol=='{' || symbol=='(')
                return 1;
        }
        if(a[i]==')')
        {
            symbol=pop();
            if(symbol=='[' || symbol=='{')
                return 1;
        }
    }
    return pop();
}



void push(char val)
{
        top=top+1;
        b[top]=val;
}



char pop()
{
        char chumma=b[top];

        b[top]=-1;
        top=top-1;

        return chumma;
}




