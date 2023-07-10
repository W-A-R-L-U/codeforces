#include<bits/stdc++.h>
using namespace std;
int main()
{
    int drinks;
    cin>>drinks;
    double por=0.0;
    for(int i=0;i<drinks;i++)
    {
        double part;
        cin>>part;
        por+=part/100;
    }
    cout<<fixed<<setprecision(12)<<por/drinks*100;
    cout<<endl;
    return 0;
}
