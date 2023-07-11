#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tesr;
    cin>>tesr;
    for(int t=stoi(tesr);t>0;t--)
    {
        long long num;
        cin>>num;
        if(num%2==0) cout<<num/2-1;
        else cout<<num/2;
        cout<<endl;
    }
}
