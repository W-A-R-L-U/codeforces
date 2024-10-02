#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        int a,b,c;
        cin>>a>>b>>c;
        double d=abs(a-b);
        double d2=d/2;
        int ans=ceil(d2/c);
        cout<<ans<<"\n";
    }
    return 0;
}