#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ma=a;
    if(b>ma) ma=b;
    if(c>ma) ma=c;
    if(d>ma) ma=d;
    if(a!=ma) cout<<ma-a<<" ";
    if(b!=ma) cout<<ma-b<<" ";
    if(c!=ma) cout<<ma-c<<" ";
    if(d!=ma) cout<<ma-d<<" ";
    cout<<endl;
    return 0;
}
