#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    vector<int> vec(num,0);
    int p,q;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int val;
        cin>>val;
        vec[val-1]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int val;
        cin>>val;
        vec[val-1]=1;
    }
    int count=0;
    for(int i:vec)
        count+=i;
    if(count==num) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    cout<<endl;
    return 0;
}
