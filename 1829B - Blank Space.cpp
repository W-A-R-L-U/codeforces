#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string testcases;
    getline(cin,testcases);
    for(int t=stoi(testcases);t>0;t--)
    {
        int arrlen;
        cin>>arrlen;
        vector<int> binvec(arrlen);
        for(int i=0;i<arrlen;i++)
        {
            cin>>binvec[i];
        }
        int blank=0,temp=0;
        for(int n:binvec)
        {
            if(n==0)
            {
                temp++;
                if(temp>blank) blank=temp;
            }
            else
            {
                if(temp>blank) blank=temp;
                temp=0;
            }
        }
        cout<<blank;
        cout<<endl;
    }
}
