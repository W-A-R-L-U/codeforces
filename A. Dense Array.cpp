#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;cin>>a[i++]);
        int ans=0;
        for(int i=1;i<n;i++){
            int mn=min(a[i],a[i-1]);
            int mx=max(a[i],a[i-1]);
            while(mn*2<mx) ans++,mn*=2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
