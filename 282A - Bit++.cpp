#include<iostream>
using namespace std;
int main()
{
    string nsta;
    cin>>nsta;
    int val=0;
    for(int t=0;t<stoi(nsta);t++)
    {
        string bit;
        cin>>bit;
        if(bit[0]=='+' || bit[2]=='+') val++;
        else val--;
    }
    cout<<val;
    cout<<endl;
    return 0;
}
