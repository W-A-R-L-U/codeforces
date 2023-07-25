#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tes;
    cin>>tes;
    for(int t=stoi(tes);t>0;t--)
    {
        int arrl;
        cin>>arrl;
        int co=0;
        for(int i=0;i<arrl;i++)
        {
            int a;
            cin>>a;
            if(a%2==1) co++;
        }
        if(co%2==1) cout<<"YES";
        else if(co<arrl && co>0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
