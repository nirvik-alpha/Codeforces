#include<iostream>
#include<algorithm>

using namespace std;
main() {
   string s;
    cin>>s;

   s.erase(remove(s.begin(), s.end(), '+'), s.end());

//    cout<<s;

    sort(s.begin() ,s.end());

        cout<<s[0];
      for(int i=1;i<s.length();i++)
      {
          cout<<'+'<<s[i];
      }

}
