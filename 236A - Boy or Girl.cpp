#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    map<char,int> mp;
    for(char c:name)
        mp[c]++;
    int count=0;
    for(auto p:mp)
        count++;
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    cout<<endl;
    return 0;
}
