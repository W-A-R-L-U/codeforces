#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;cin>>a[i++]);
        sort(a.begin(),a.end());
        if(a[0]==a[n-1]) cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<a[n-1]<<" "<<a[0]<<" ";
            for(int i=n-2;i>0;i--) cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
