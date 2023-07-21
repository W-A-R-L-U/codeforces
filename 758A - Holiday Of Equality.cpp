#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cit;
    cin>>cit;
    vector<int> vec(cit,0);
    for(int i=0;i<cit;i++)
        cin>>vec[i];
    int ma=*max_element(vec.begin(),vec.end());
    int bur=0;
    for(int i=0;i<cit;i++)
        bur+=ma-vec[i];
    cout<<bur<<endl;
    return 0;
}
