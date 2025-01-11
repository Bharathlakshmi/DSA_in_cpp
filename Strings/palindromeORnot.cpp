#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void push(char val);
void pop();

char s[10],a[10],b[10];
int top=-1,n=0,j=0;

main()
{
     cout<<"Enter String : ";
     cin>>s;

      cout<<"Entered string : ";
     for(int i=0;s[i]!='\0';i++)
     {
            cout<<s[i];
            n++;
     }

     cout<<endl;

     //puts(a);

     for(int i=0;i<n;i++)
     {
        push(s[i]);
     }

     for(int i=0;i<n;i++)
     {
        pop();
     }
     //b[j]='\0';



     cout<<"Reverse string : ";


      for(int i=0;b[i]!='\0';i++)
     {
        cout<<b[i];
     }
      cout<<endl;

      int y=0;
     for(int i=0;i<n;i++)
     {
        if(s[i]==b[i])
            y++;
     }

      if(y==n)
            cout<<"Palindrome \n";
      else
        cout<<"Not a Palindrome \n";


     //cout<<"hii:"<<a[0]<<"empty";

}


void push(char val)
{

            top=top+1;;
            a[top]=val;

            //cout<<"pushed "<<val<<endl;

}

void pop()
{

        b[j]=a[top];
        j++;

        a[top]=-1;
        top--;

      // cout<<"pop "<<b[j]<<endl;
}

