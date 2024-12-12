#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        int n;
        cin>>n;
        int r=n%10;
        cout<<n/10+(r==9)<<"\n";
    }
    return 0;
}
