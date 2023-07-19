#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tes;
    cin>>tes;
    for(int t=stoi(tes);t>0;t--)
    {
        int p1,p2,p3,p4;
        cin>>p1>>p2>>p3>>p4;
        int front=0;
        if(p1<p2) front++;
        if(p1<p3) front++;
        if(p1<p4) front++;
        cout<<front<<endl;
    }
    return 0;
}
