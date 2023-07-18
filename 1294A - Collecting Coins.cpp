#include<bits/stdc++.h>
using namespace std;
int main()
{
    string testcases;
    cin>>testcases;
    for(int t=stoi(testcases);t>0;t--)
    {
        int c1,c2,c3,m;
        cin>>c1>>c2>>c3>>m;
        int ma=max(c1,max(c2,c3));
        c1-=ma;c2-=ma;c3-=ma;
        m+=c1+c2+c3;
        if(m>=0 && m%3==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
