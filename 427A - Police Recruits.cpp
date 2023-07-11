#include<bits/stdc++.h>
using namespace std;
int main()
{
    int crno;
    cin>>crno;
    int police=0,crime=0;
    for(int i=0;i<crno;i++)
    {
        int n;
        cin>>n;
        if(n>0) police+=n;
        else if(police==0) crime++;
        else police--;
    }
    cout<<crime;
    cout<<endl;
    return 0;
}
