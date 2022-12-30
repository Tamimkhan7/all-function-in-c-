#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char s[50000];
    int c=0;
    //gets(s);
    cin.get(s, 500000);
    cout<<s<<endl;
    for (int i=0; s[i] != '\0'; i++)
    {
        c++;
    }
    cout<<c<<endl;

    return 0;
}
