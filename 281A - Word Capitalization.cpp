#include<bits/stdc++.h>
using namespace std;
int main()
{
    string scap;
    getline(cin,scap);
    transform(scap.begin(),scap.begin()+1,scap.begin(),::toupper);
    cout<<scap;
    cout<<endl;
    return 0;
}
