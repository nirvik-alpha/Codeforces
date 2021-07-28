
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int x= a+b*c;
    int y = a*(b+c);
    int z = a*b*c;
    int q = (a+b)*c;
    int s = a+b+c;

    cout<<max(x,max(y,max(z,max(s,q))))<<endl;


}
