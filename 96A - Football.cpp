

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool f=true;
    int count=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        }else{
            if(count>=7){
                f=false;
                break;
            }
            count=1;
        }
    }
    if(count>=7) f=false;
    if(!f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
