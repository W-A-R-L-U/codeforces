#include<iostream>
using namespace std;
int main()
{
    string ori;
    string rep;
    cin>>ori;
    cin>>rep;
    int lrn=ori.length();
    int index=0;
    while(index<lrn && ori[index]==rep[lrn-1-index])
    {
        index++;
    }
    if(index==lrn) cout<<"YES";
    else cout<<"NO";
    return 0;
    cout<<endl;
}
