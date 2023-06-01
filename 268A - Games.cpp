#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string teams;
    cin>>teams;
    int nt=stoi(teams);
    vector<pair<int,int>> unico;
    for(int i=nt;i>0;i--)
    {
        int co1,co2;
        cin>>co1;
        cin>>co2;
        unico.push_back({co1,co2});
    }
    int match=0;
    for(int i=0;i<nt;i++)
    {
        auto p1=unico[i];
        for(int j=0;j<nt;j++)
        {
            if(i!=j)
            {
                if(p1.first==unico[j].second) match++;
            }
        }
    }
    cout<<match;
    cout<<endl;
    return 0;
}
