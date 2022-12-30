#include <bits/stdc++.h>
#include <cctype>

using namespace std;
int main ()
{
    string s;
    cin>>s;
     for (auto& x : s) {
        x = tolower(x);
    }
      cout<<s<<endl;
    return 0;
}
