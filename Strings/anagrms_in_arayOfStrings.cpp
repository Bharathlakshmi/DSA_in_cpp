

#include<iostream>
using namespace std;
#include <bits/stdc++.h>


//see using geeks(down)

bool check(string s1,string s2);
string sortt(string a,int n);

main()
{
    string s[]={"geeksquiz", "geeksforgeeks", "abcd",
                    "forgeeksgeeks", "zuiqkeegs","aaca","acaa"};

    int n=7;



    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(check(s[i],s[j]))
            {
                cout<<s[i]<<"  is an anagram of  "<<s[j]<<endl;
            }
        }
    }

}

bool check(string s1,string s2)
{


    int y=0,p1,p2;
     p1=s1.size();
     p2=s2.size();



    if(p1!=p2)
    {
        return false;
    }
    s1=sortt(s1,p1);
    s2=sortt(s2,p2);

    for(int i=0;i<p1;i++)
    {
        if(s1[i]==s2[i])
            y++;
        else
           return false;
    }



        return true;


}



string sortt(string a,int m)
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
    return a;


}




/*
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

// function to check whether two strings are anagram of each other
bool areAnagram(string str1, string str2)
{
    // Create two count arrays and initialize all values as 0
    int count[NO_OF_CHARS] = {0};
    int i;

    // For each character in input strings, increment count in
    // the corresponding count array
    for (i = 0; str1[i] && str2[i];  i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    // If both strings are of different length. Removing this condition
    // will make the program fail for strings like "aaca" and "aca"
   if (str1[i] || str2[i])
      return false;

    // See if there is any non-zero value in count array
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return false;
     return true;
}

void findAllAnagrams(string arr[], int n)
{
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            // If the original strings are anagrams, print them
            if (areAnagram(arr[i], arr[j]))
                cout << arr[i] << " is anagram of " << arr[j] << endl;
        }
    }
}


int main()
{
    string arr[] = {"geeksquiz", "geeksforgeeks", "abcd",
                    "forgeeksgeeks", "zuiqkeegs","aaca","aca"};
    int n = sizeof(arr)/sizeof(arr[0]);
    findAllAnagrams(arr, n);
    return 0;
}
*/
















