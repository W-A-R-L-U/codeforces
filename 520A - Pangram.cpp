#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int> pan(26,0);
    string pana;
    cin>>pana;
    for(char ch:pana)
    {
        if(65<=ch && ch<=91)
            pan[ch-65]=1;
        else 
            pan[ch-97]=1;
    }
    int panco=0;
    for(int i:pan)
    {
        panco+=i;
    }
    if(panco==26) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    return 0;
}
