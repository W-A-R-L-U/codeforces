#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test;
    cin>>test;
    for(int t=stoi(test);t>0;t--)
    {
        string guess;
        cin>>guess;
        string orig="";
        for(int i=0;i<guess.length();i+=2)
            orig+=guess[i];
        orig+=guess[guess.length()-1];
        cout<<orig;
        cout<<endl;
    }
    return 0;
}
