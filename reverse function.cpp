#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    //sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    int x = stoi(s);//value move to interger formate
    cout<<x<<endl;

    return 0;
}
