#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string steps;
    getline(cin,steps);
    int num=stoi(steps);
    vector<int> vec(5);
    vec[0]=num/5;
    vec[1]=(num%5)/4;
    vec[2]=((num%5)%4)/3;
    vec[3]=(((num%5)%4)%3)/2;
    vec[4]=((((num%5)%4)%3)%2);
    cout<<vec[0]+vec[1]+vec[2]+vec[3]+vec[4];
    cout<<endl;
    return 0;
}
