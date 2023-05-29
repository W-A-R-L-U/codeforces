#include<iostream>
using namespace std;
int main()
{
    int div;
    cin>>div;
    int times;
    cin>>times;
    for(int i=0;i<times;i++)
    {
        int r=div%10;
        if(r==0) div/=10;
        else div-=1;
    }
    cout<<div;
    cout<<endl;
    return 0;
}
