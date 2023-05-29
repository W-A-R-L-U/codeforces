#include<iostream>
using namespace std;
int main()
{
    int rooms;
    cin>>rooms;
    int live=0;
    for(int i=0;i<rooms;i++)
    {
        int pl;
        int pcl;
        cin>>pl;
        cin>>pcl;
        if(pcl-pl<=2) live+=1;
    }
    cout<<live;
    cout<<endl;
    return 0;
}
