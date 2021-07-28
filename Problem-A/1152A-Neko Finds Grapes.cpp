
#include<bits/stdc++.h>
#define    loop(a)           for(int i=0;i<(a);i++)
using namespace std;

const int N=2e5+5;

long long  a[N];
vector<long long>v1,v2;

int main()
{ int n, m;
    cin>>n>>m;

    int chest[n], key[m];

    int odd_chest = 0, even_chest = 0;
    int odd_key = 0, even_key = 0;

    for(int i=0; i<n; i++){
    	cin>>chest[i];

    	if(chest[i]%2 == 0){
        	even_chest ++;
    	}
    	else{
        	odd_chest ++;
    	}
    }

    for(int i=0; i<m; i++){
    	cin>>key[i];

    	if(key[i]%2 == 0){
        	even_key ++;
    	}
    	else{
        	odd_key ++;
    	}
    }

    cout<<min(even_chest,odd_key) + min(odd_chest,even_key)<<endl;


}
