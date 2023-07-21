#include<bits/stdc++.h>
using namespace std;
int main()
{
    string te;
    cin>>te;
    for(int t=stoi(te);t>0;t--)
    {
        string num;
        cin>>num;
        int val=0;
        val+=(num[0]-'0')+(num[1]-'0')+(num[2]-'0')-(num[3]-'0')-(num[4]-'0')-(num[5]-'0');
        if(val==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
