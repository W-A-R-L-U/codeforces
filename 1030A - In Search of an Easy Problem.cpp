#include<iostream>
#include<map>
using namespace std;
int main()
{
    int people;
    cin>>people;
    bool opi=false;
    for(int i=0;i,people;i++)
    {
        int num;
        cin>>num;
        if(num==1) opi=true;
    }
    if(opi) cout<<"HARD";
    else cout<<"EASY";
    cout<<endl;
    return 0;
}
