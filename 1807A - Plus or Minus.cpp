#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test;
    cin>>test;
    for(int t=stoi(test);t>0;t--)
    {
        int v1,v2,v3;
        cin>>v1>>v2>>v3;
        if(v1+v2==v3) cout<<"+";
        else cout<<"-";
        cout<<endl;
    }
}
