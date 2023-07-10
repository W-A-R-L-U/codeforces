#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stops,cap=0,pass=0;
    cin>>stops;
    for(int n=0;n<stops;n++)
    {
        int drop,get;
        cin>>drop>>get;
        pass=pass-drop+get;
        if(pass>cap) cap=pass;
    }
    cout<<cap;
    cout<<endl;
    return 0;
}
