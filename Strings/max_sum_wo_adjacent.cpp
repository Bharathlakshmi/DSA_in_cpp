#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findmax(vector<int> arr,int n);
int rec(vector<int>& nums, int idx);

main()
{
   vector<int> arr;
   int n,t;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"Enter thr array : s";
   for(int i=0;i<n;i++)
   {
       cin>>t;
       arr.push_back(t);
   }

   cout<<findmax(arr,n)<<endl;
}

int findmax(vector<int> arr,int n)
{
    return rec(arr,0);
}

int rec(vector<int>& nums, int idx)
{
    if(idx>=nums.size())
        return 0;

    return max(nums[idx] + rec(nums, idx+2), rec(nums,idx+1));
}
