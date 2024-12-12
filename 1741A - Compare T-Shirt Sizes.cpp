#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        string a,b;
        cin>>a>>b;
        if(a.back()==b.back()){
            if(a.back()=='S'){
                if(a.size()>b.size()) cout<<"<\n";
                else if(a.size()<b.size()) cout<<">\n";
                else cout<<"=\n";
            }else if(a.back()=='L'){
                if(a.size()>b.size()) cout<<">\n";
                else if(a.size()<b.size()) cout<<"<\n";
                else cout<<"=\n";
            }else cout<<"=\n";
        }else{
            if(a.back()>b.back()) cout<<"<\n";
            else if(a.back()<b.back()) cout<<">\n";
        }
    }
    return 0;
}
