#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pie;
    cin>>pie;
    int cubes=0,height=-1,a=1;
    while(cubes<=pie)
    {
        height++;
        cubes+=a*(a+1)/2;
        a++;
    }
    cout<<height;
    cout<<endl;
    return 0;
}
