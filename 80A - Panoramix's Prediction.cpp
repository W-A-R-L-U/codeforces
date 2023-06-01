#include<iostream>
using namespace std;
int main()
{
    int prime;
    int checkprime;
    cin>>prime;
    cin>>checkprime;
    int nextprime;
    for(int i=prime+1;;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            nextprime=i;
            break;
        }
    }
    if(checkprime==nextprime) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    return 0;
}
