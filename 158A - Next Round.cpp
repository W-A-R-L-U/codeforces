#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int number;
    int place;
    cin>>number;
    cin>>place;
    vector<int> placevec(number);
    for(int i=0;i<number;i++)
    {
        cin>>placevec[i];
    }
    int val=placevec[place-1];
    int sel=0;
    for(int i:placevec)
    {
        if(i>0 && i>=val) sel++;
    }
    cout<<sel;
    cout<<endl;
    return 0;
}
