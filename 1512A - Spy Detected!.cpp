#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    for(int t=testcases;t>0;t--){
    string arrco;
    cin>>arrco;
    vector<int> arrnum(stoi(arrco));
    for(int i=0;i<stoi(arrco);i++)
    {
        cin>>arrnum[i];
    }
    int index1,index2;
    for(int i=0;i<stoi(arrco)-1;i++)
    {
        if(arrnum[i]!=arrnum[i+1])
        {
            index1=i;
            index2=i+1;
            break;
        }
    }
    if(index2+1<stoi(arrco))
    {
        if(arrnum[index2]!=arrnum[index2+1]) cout<<index2+1;
        else cout<<index1+1;
    }
    else if(index1-1>=0)
    {
        if(arrnum[index1]!=arrnum[index1-1]) cout<<index1+1;
        else cout<<index2+1;
    }
    cout<<endl;
    }
    return 0;
}
