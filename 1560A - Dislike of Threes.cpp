#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tes;
    cin>>tes;
    for(int t=stoi(tes);t>0;t--)
    {
        int n;
        cin>>n;
        int i=1,val=1;
        while(i<=n)
        {
            if(val%3!=0 && val%10!=3)
            {
                i++;
            }
            val++;
        }
        cout<<val-1<<endl;
    }
    return 0;
}
