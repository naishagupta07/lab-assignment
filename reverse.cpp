#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string x;
    cin>>x;
    reverse(x.begin(),x.end());
    cout<<x;
    return 0;
}
