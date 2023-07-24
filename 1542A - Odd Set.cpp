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
        int c=0;
        for(int i=0;i<2*arrl;i++)
        {
            int a;
            cin>>a;
            if(a%2==1)
                c++;
        }
        if(c==arrl) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
