#include<bits/stdc++.h>
using namespace std;
int main()
{
    int expr;
    cin>>expr;
    for(int i=0;i<expr-1;i++)
        if(i%2==0) cout<<"I hate that ";
        else cout<<"I love that ";
    if(expr%2==1) cout<<"I hate it";
    else cout<<"I love it";
    cout<<endl;
    return 0;
}
