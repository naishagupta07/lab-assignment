#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int x;
    vector<int>arr(10);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    int sum=0;
    for(auto it:arr)
    {
        sum+=it;
    }
    return sum/n;
}
