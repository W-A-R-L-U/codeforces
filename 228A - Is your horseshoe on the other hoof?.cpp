#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> color;
    for(int i=0;i<4;i++)
    {
        int a;
        cin>>a;
        color[a]++;
    }
    int same=0;
    for(auto mp:color)
    {
        same++;
    }
    cout<<4-same;
    cout<<endl;
    return 0;
}
