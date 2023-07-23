#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tes;
    cin>>tes;
    for(int t=stoi(tes);t>0;t--)
    {
        int arrn;
        cin>>arrn;
        vector<int> vec(arrn);
        for(int i=0;i<arrn;i++)
            cin>>vec[i];
        int ma=vec[0],mi=vec[0];
        for(int i:vec)
        {
            if(i<mi) mi=i;
            if(i>ma) ma=i;
        }
        cout<<ma-mi<<endl;
    }
    return 0;
}
