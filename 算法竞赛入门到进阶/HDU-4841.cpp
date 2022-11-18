// 圆桌问题
#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> t;
int main()
{
    while(cin>>n>>m)
    {
        for(int i=0;i<2*n;++i) t.push_back(i);
        int p=0;
        while(t.size()!=n) //留下好人
        {
            p = (p+m-1) % t.size(); //推出来的公式
            t.erase(t.begin()+p); //杀死坏人
        }
        for(int i=0, j=0;i<2*n;++i)
        {
            if(!(i%50)&&i) cout<<endl;
            if(j<t.size()&&i==t[j]) j++, cout<<"G";
            else cout<<"B";
        }
        t.clear();
        cout<<endl<<endl;
    }
    return 0;
}