#include<iostream>
#include<map>
using namespace std;
int main()
{
    int yer;
    cin>>yer;
    while(true)
    {
        yer++;
        int yer1=yer;
        map<int,int> yep;
        while(yer1)
        {
            yep[yer1%10]++;
            yer1/=10;
        }
        int ans=0;
        for(auto mp:yep)
        {
            if(mp.second==1) ans++;
        }
        if(ans==4) break;
    }
    cout<<yer;
    cout<<endl;
    return 0;
}
