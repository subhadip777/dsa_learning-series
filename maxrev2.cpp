//O(nlogn)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int customers;
    cin>>customers;
    long long rev=0,minrev=0;
    long long int budget[customers];
    for(int i=0;i<customers;i++)
    {
        long long int k;
        cin>>k;
        budget[i]=k;
    }
    sort(budget,budget+customers,greater<int>());
     for(int i=1;i<customers;i++)
    {
      for(int j=i;j>=0;j--)
      {
         if(budget[i]<=budget[j])
         {
             minrev+=budget[i];
         }

      }
      if(minrev<rev)
      {
          break;
      }
      else{
          rev=minrev;
          minrev=0;
      }
    }
    if(budget[0]>=rev)
    {
        cout<<budget[0]<<endl;
    }
    else
    {
        cout<<rev<<endl;
    }
    
}