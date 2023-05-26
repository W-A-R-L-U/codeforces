#include<iostream>
using namespace std;
int main()
{
    int index1,index2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                index1=i;
                index2=j;
                break;
            }
        }
    }
    cout<<abs(index1-2)+abs(index2-2);
    cout<<endl;
    return 0;
}
