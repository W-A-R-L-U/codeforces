#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int l=str.length();
    if(l==2) cout<<0;
    else
    {
        set<char> alpha;
        for(int i=1;i<l;i+=3)
            alpha.insert(str[i]);
        cout<<alpha.size();
    }
    cout<<endl;
    return 0;
}
