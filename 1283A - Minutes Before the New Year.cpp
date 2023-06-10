#include<iostream>
using namespace std;
int main()
{
    string test;
    cin>>test;
    for(int t=stoi(test);t>0;t--)
    {
        int hours,min;
        cin>>hours;
        cin>>min;
        cout<<(23-hours)*60+(60-min);
        cout<<endl;
    }
    return 0;
}
