
#include<bits/stdc++.h>
using namespace std;

int check_vowel(char a)
{
   if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    return 1;
  else
    return 0;
}


int main()
{
    char ch;

    char s1[10000],s2[10000];
    cin>>s1>>s2;
    int f=0;
        if(strlen(s1)!=strlen(s2))
           {
               cout<<"NO"<<endl;
            return 0;
           }

            for(int i=0;i<strlen(s1);i++)
            {
                    if(check_vowel(s1[i])!=check_vowel(s2[i]))
                       {
                           cout<<"NO"<<endl;
                           return 0;
                       }

            }
            cout<<"YES"<<endl;


}
