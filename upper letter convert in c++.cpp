#include <bits/stdc++.h>
#include <cctype>

using namespace std;
int main ()
{
    string s;
    cin>>s;
    for (auto& m : s)
    {
        m = toupper(m);
    }
    cout<<s<<endl;
    return 0;
}

