#include<iostream>
using namespace std;
int main()
{
    int stones;
    cin>>stones;
    int rem=0;
    string color;
    cin>>color;
    for(int i=0;i<stones-1;i++)
    {
        if(color[i]==color[i+1]) rem=rem+1;
    }
    cout<<rem;
    cout<<endl;
    return 0;
}
