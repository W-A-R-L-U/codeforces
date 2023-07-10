#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name,res,pile;
    cin>>name>>res>>pile;
    string che=name+res;
    sort(che.begin(),che.end());
    sort(pile.begin(),pile.end());
    int l1=che.length(),l2=pile.length();
    if(l1!=l2) cout<<"NO";
    else
    {
        int i=0;
        for(i=0;i<l1;i++)
            if(che[i]!=pile[i])
                break;
        if(i==l1) cout<<"YES";
        else cout<<"NO";
    }
    cout<<endl;
    return 0;
}
