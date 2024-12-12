#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        int s;
        cin>>s;
        int n=9;
        stack<int> st;
        while(s>n){
            st.push(n);
            s-=n;
            n--;
        }
        if(s!=0) st.push(s);
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<"\n";
    }
    return 0;
}
