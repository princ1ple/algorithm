#include<iostream>
#include<vector>
using namespace std;
// F(0)=0，F(1)=1, F(n)=F(n - 1)+F(n - 2)（n ≥ 2，n ∈ N*）
int fab(int n)
{
    if(!n) return 0;
    if(n==1) return 1;
    return fab(n-1)+fab(n-2);
}
void solve()
{
    int x;
    cin>>x;
    cout<<fab(x)<<endl;
}
int main()
{
    solve();
}