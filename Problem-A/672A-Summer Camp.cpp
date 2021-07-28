
#include<bits/stdc++.h>
#define    loop(a)           for( i=2;i<=a;i++)
using namespace std;

const int N=2e5+5;

long long  a[N];

vector<long long>v1,v2;

int main()
{ long long  n, m,i;
    string s2 ="";
  //  string s2=0;

    cin>>n;

    int c=1;
    for(i=1;i<=500;i++)
    {
        if(c<10)
            s2+=char(48+c);
        else
        {
            string s1="";
           int  x=c;
            while(x)
            {
                s1+=char((x%10)+48);
                x=x/10;
            }
            reverse(s1.begin(),s1.end());
            s2+=s1;
        }
        c++;
    }
cout<<s2[n-1]<<endl;


}
