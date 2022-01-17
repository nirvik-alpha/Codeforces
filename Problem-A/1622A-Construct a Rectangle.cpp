#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef long  double lb;
//typedef variate_generator var;

#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;

const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

long long  mod = 1000000000+7;


bool isSubSequence(string t, string s, int m, int n)
{
    int j = 0;

    for (int i = 0; i < n && j < m; i++)
        if (t[j] == s[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}

void solve()
{
    ll l1 ,l2,l3;
    cin>>l1>>l2>>l3;

        ll x =( l1 + l2 +l3);

    set<int>s;
    vector<int>v;

    if(x%2!=0)
        cout<<"NO"<<endl;
    else
    {
        s.insert(l1);
        s.insert(l2);
        s.insert(l3);

        if(s.size()<3)
        {
            if(l1==l2)
            {
                if(l3%2==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else  if(l2==l3)
            {
                if(l1%2==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
             else if(l1==l3)
            {
                if(l2%2==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
        else
        {
            v.push_back(l1);
            v.push_back(l2);
            v.push_back(l3);
            sort(v.begin(),v.end());

           ll c = v[2]-v[0];
            if(c==v[1])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }

    }





}
int main()
{
    FAST;
    long long int t,a;

       cin>>t;
         while(t--)
     {
    solve();
         }
    return 0;
}

