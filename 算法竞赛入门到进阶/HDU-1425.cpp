// sort
#include<iostream>
using namespace std;

int n,m;
const int N=100010;
int a[N];

int quick_sort(int *a, int l, int r)
{
    int k=a[l], i=l, j=r;
    while(i<j)
    {
        while(i<j&&a[j]>k) j--;
        if(i<j) swap(a[i], a[j--]);
        while(i<j&&a[r]<=k) i++;
        if(i<j) swap(a[j], a[i++]);
    }
    cout<<i<<endl;
    return i;
}
void solve(int *a, int l, int r)
{
    while(l<r)
    {
        int mid = quick_sort(a, l, r);
        quick_sort(a, 0, mid-1);
        quick_sort(a, mid+1, r);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;++i) cin>>a[i];
    solve(a, 0, n-1);
    //for(int i=n;i>0&&m>0;--i,--m) cout<<a[i]<<' ';
    for(int i=0;i<n;++i) cout<<a[i]<<' ';
    return 0;
}