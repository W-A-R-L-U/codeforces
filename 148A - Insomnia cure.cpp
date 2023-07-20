#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,v3,v4,dra;
    cin>>v1>>v2>>v3>>v4;
    cin>>dra;
    int count=0;
    for(int i=1;i<=dra;i++)
        if(i%v1==0 || i%v2==0 || i%v3==0 || i%v4==0)
            count++;
    cout<<count;
    cout<<endl;
    return 0;
}
