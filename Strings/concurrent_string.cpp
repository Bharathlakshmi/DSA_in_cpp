#include<iostream>
using namespace std;

char s[20];



main()
{

     cout<<"Enter String : ";
     cin>>s;
     cout<<s<<endl;

     char t=s[0];
     int c=0,i=0;

      for( i=0;s[i]!='\0';i++)
     {
         //c=0;
         if(s[i]==t)
         {
             c++;
         }
         else
         {
             t=s[i];
             i--;
             cout<<s[i];
             cout<<c;
             c=0;
         }
     }


             i--;
             cout<<s[i];
             cout<<c;
             c=0;


}




