#include<iostream>
using namespace std;
int main()
{
    int probnum;
    cin>>probnum;
    int probcount=0;
    for(int i=1;i<=probnum;i++)
    {
        int sol1,sol2,sol3;
        cin>>sol1>>sol2>>sol3;
        if(sol1+sol2+sol3>=2) probcount++;
    }
    cout<<probcount;
    cout<<endl;
    return 0;
}
