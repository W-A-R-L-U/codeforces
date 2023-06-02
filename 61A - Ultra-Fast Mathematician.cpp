#include<iostream>
using namespace std;
int main()
{
    string snum1;
    string snum2;
    getline(cin,snum1);
    getline(cin,snum2);
    for(int i=0;i<snum1.length();i++)
    {
        if(snum1[i]==snum2[i]) cout<<0;
        else cout<<1;
    }
    cout<<endl;
    return 0;
}
