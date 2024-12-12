#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        int n,m,k;
        cin>>n>>m>>k;
       if(n*m-1==k) cout<<"YES\n";
       else cout<<"NO\n";
    }
    return 0;
}
