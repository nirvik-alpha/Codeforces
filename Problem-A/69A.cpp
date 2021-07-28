#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f, n;
int main() {
    cin >> n;
    while (cin >> a >> b >> c) {
        d += a;
        e += b;
        f += c;
    }
    cout << ((d || e || f) ? "NO" : "YES");
}