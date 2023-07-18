#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test;
    cin>>test;
    for(int t=stoi(test);t>0;t--)
    {
        int num,flo,i=2,live=0;
        cin>>num>>flo;
        if(num<3) live=0;
        else if(3<=num && num<=flo+2) live=1;
        else
        {
            // cout<<"else";
            live=2;
            while(num>=(i*flo+3))
            {
                live++;
                i++;
            }
        }
        cout<<live+1<<endl;
        
    }
}
