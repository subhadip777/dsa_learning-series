#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        long long int n,num=0;
        cin>>n;
        long long int power=1,devider=1;
        while(devider>0)
        {
            devider=n/pow(5,power);
            num+=devider;
            power++;
        }
        cout<<num<<endl;

    }
    return 0;
}