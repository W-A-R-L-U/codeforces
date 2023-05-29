#include<iostream>
using namespace std;
int main()
{
    int games;
    cin>>games;
    string won;
    cin>>won;
    int anton=0;
    int danik=0;
    for(char ch:won)
    {
        if(ch=='A') anton++;
        else danik++;
    }
    if(anton>danik) cout<<"Anton";
    else if(anton<danik) cout<<"Danik";
    else cout<<"Friendship";
    cout<<endl;
    return 0;
}
