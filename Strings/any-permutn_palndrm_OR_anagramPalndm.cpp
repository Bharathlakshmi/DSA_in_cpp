
#include<iostream>
#include<string.h>
using namespace std;
char s[25];

main()
{

     cout<<"Enter String : ";
     cin>>s;

     char r[10];
     int b[10],k=0;


     char t=s[0];

     int c=0,i=0,l=0;

      for( i=0;s[i]!='\0';i++)
     {

         if(s[i]==t)
         {
             c++;
           //  r[k]=s[i];

         }
         else
         {
             t=s[i];
             i--;

             r[k]=s[i];
             b[k]=c;
             k++;

             c=0;
         }
     }
             i--;
             r[k]=s[i];
             b[k]=c;
             k++;

     /*
     for(int j=0;j<k;j++)
      {
          cout<<r[j]<<" - "<<b[j]<<endl;
      }

     */

       for(int j=0;j<k;j++)
      {
           for(int p=j+1;p<k;p++)
           {
               if(r[j]==r[p])
               {
                   b[j]=b[j]+b[p];
                   for(int y=p;y<k;y++)
                   {
                       r[y]=r[y+1];
                       b[y]=b[y+1];
                   }
                   k--;
               }
           }
      }


      /*
      cout<<endl;
      for(int j=0;j<k;j++)
      {
          cout<<r[j]<<" - "<<b[j]<<endl;
      }

      */

        int n=strlen(s);
        int temp=0;

        if(n%2==0)                               //for even no.s
        {
            for(int j=0;j<k;j++)
            {
                if(b[j]%2!=0)
                   temp=1;
            }

            if(temp==1)
                cout<<"CANNOT be a palindrome\n";
            else
                cout<<"CAN be a palindrome\n";
        }
        else                                          //for odd numbers
        {
            for(int j=0;j<k;j++)
            {
                if(b[j]%2!=0)
                   temp++;
            }

            if(temp==1)
                 cout<<"CAN be a palindrome\n";
            else
                 cout<<"CANNOT be a palindrome\n";

        }

}
