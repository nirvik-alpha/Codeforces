
#include<iostream>
#include<set>
using namespace std;

set<int>s;

int main()
{
    int a;
        for(int i=1;i<=4;i++)
    {
        cin>>a;
        s.insert(a);
    }
    cout<<4-s.size()<<endl;

}
