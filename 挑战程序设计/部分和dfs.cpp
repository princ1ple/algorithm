#include<iostream>
#include<vector>
using namespace std;
vector<int> a;
int n, k, t;

bool dfs(int i, int sum)
{
    if(i==n) return sum==k;
    if(dfs(i+1, sum)) return true;
    if(dfs(i+1, sum+a[i])) return true;
    return false;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>t;
        a.push_back(t);
    }
    cin>>k;
    if(dfs(0, 0)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}