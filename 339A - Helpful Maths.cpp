#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string maths;
    getline(cin,maths);
    int len=maths.length();
    vector<int> num;
    for(int i=0;i<len;i+=2)
    {
        num.push_back(maths[i]-'0');
    }
    sort(num.begin(),num.end());
    for(int i=0;i<num.size()-1;i++)
    {
        cout<<num[i]<<"+";
    }
    cout<<num[num.size()-1];
    cout<<endl;
    return 0;
}
