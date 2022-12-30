#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double x,y;
    cin>>x>>y;
    //This function returns a-b if a>b otherwise returns 0. where, a is the first argument and b is the second argument.
    double result = fdim(x,y);
    cout<<result<<endl;

    return 0;
}
