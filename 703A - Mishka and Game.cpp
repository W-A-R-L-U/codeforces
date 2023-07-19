#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rounds,win=0;
    cin>>rounds;
    for(int r=0;r<rounds;r++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) win++;
        else if(a<b) win--;
    }
    if(win>0) cout<<"Mishka";
    else if(win<0) cout<<"Chris";
    else cout<<"Friendship is magic!^^";
    cout<<endl;
    return 0;
}
