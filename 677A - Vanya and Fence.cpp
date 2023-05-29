#include<iostream>
using namespace std;
int main()
{
    int friends;
    int height;
    cin>>friends;
    cin>>height;
    int width=0;
    for(int i=0;i<friends;i++)
    {
        int h;
        cin>>h;
        if(h<=height) width++;
        else width+=2;
    }
    cout<<width;
    cout<<endl;
    return 0;
}
