//O(n^2)
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
    for(int i=0;i<customers;i++)
    {
        //with time complexity O(n*n)
        for(int j=0;j<customers;j++)
        {
            if(budget[i]<=budget[j])
            {
                minrev=minrev + budget[i];
            }
        }
        rev=max(rev,minrev);
        minrev=0;

    }
    cout<<rev<<endl;

    return 0;
}