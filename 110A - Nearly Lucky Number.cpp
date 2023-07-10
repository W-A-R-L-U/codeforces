#include<iostream>
using namespace std;
int main()
{
    string luck;
    cin>>luck;
    long long lc=0;
    for(char ch: luck)
    {
        if(ch=='4' || ch=='7') lc++;
    }
    string nln=to_string(lc);
    long long i=0;
    for(i=0;i<nln.length();i++)
        if(nln[i]!='4' && nln[i]!='7')
            break;
    if(i==nln.length()) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    return 0;
}
