#include<iostream>
using namespace std;
int main(){
    long long cost,dollar,bana;
    cin>>cost;
    cin>>dollar;
    cin>>bana;
    long long totco=cost;
    for(int i=2;i<=bana;i++)
    {
        totco+=i*cost;
    }
    if(dollar<totco) cout<<totco-dollar;
    else cout<<0;
    cout<<endl;
    return 0;
}
