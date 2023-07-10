#include<bits/stdc++.h>
using namespace std;
int main()
{
    int strnum;
    cin>>strnum;
    map<string,int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    int faces=0;
    for(int i=0;i<strnum;i++)
    {
        string s;
        cin>>s;
        faces+=mp[s];
    }
    cout<<faces;
    cout<<endl;
    return 0;
}
