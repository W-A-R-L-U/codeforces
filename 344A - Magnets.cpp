#include<iostream>
using namespace std;
int main()
{
    int magnets;
    cin>>magnets;
    string premag;
    cin>>premag;
    int magrp=1;
    for(int i=1;i<magnets;i++)
    {
        string currmag;
        cin>>currmag;
        if(premag!=currmag) magrp++;
        premag=currmag;
    }
    cout<<magrp;
    cout<<endl;
    return 0;
}
