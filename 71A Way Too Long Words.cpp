#include<iostream>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    for(int i=1;i<=testcases;i++)
    {
        string longword;
        cin>>longword;
        if(longword.length()>10)
        {
            cout<<longword[0]+to_string(longword.length()-2)+longword[longword.length()-1];
            cout<<endl;
            continue;
        }
        cout<<longword;
        cout<<endl;
    }
    return 0;
}
