#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string conatt;
    cin>>conatt;
    vector<int> conrank(stoi(conatt));
    for(int i=0;i<stoi(conatt);i++)
    {
        cin>>conrank[i];
    }
    int less=conrank[0];
    int more=conrank[0];
    int amazco=0;
    for(int i=1;i<stoi(conatt);i++)
    {
        if(conrank[i]<less)
        {
            amazco++;
            less=conrank[i];
        }
        if(conrank[i]>more)
        {
            amazco++;
            more=conrank[i];
        }
    }
    cout<<amazco;
    cout<<endl;
    return 0;
}
