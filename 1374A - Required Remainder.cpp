#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test;
    cin>>test;
    for(int t=stoi(test);t>0;t--)
    {
        int d,r,num;
        cin>>d>>r>>num;
        int mod=num%d;
        if(mod==r) cout<<num;
        else if(mod<r) cout<<num-mod-d+r;
        else cout<<num-mod+r;
        cout<<endl;
    }
    return 0;
}
