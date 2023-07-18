#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,count=0;
    cin>>row>>col;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            char c;
            cin>>c;
            if(c=='W' || c=='B' || c=='G')
                count++;
        }
    if(count==row*col) cout<<"#Black&White";
    else cout<<"#Color";
    cout<<endl;
}
