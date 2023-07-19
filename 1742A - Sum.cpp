#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tes;
    cin>>tes;
    for(int t=stoi(tes);t>0;t--)
    {
        int v1,v2,v3;
        cin>>v1>>v2>>v3;
        if(v1+v2==v3 || v2+v3==v1 || v1+v3==v2) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
