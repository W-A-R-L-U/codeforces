#include<bits/stdc++.h>
using namespace std;
int main()
{
    string testcases;
    cin>>testcases;
    for(int t=stoi(testcases);t>0;t--)
    {
        int num1,num2;
        cin>>num1>>num2;
        if(num1%num2==0) cout<<0;
        else cout<<num2-(num1%num2);
        cout<<endl;
    }
    return 0;
}
