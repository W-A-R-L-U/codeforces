#include<bits/stdc++.h>
using namespace std;
int main()
{
    int frnds;
    cin>>frnds;
    vector<int> gifts(frnds);
    for(int i=0;i<frnds;i++)
        cin>>gifts[i];
    map<int,int> mp;
    for(int i=0;i<frnds;i++)
        mp[gifts[i]]=i+1;
    for(int i=1;i<=frnds;i++)
        cout<<mp[i]<<" ";
    return 0;
}
