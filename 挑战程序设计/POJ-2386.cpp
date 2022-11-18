// lake 
#include<iostream>
#include<vector>
using namespace std;
char map[1000][1000];
char ch;
int n,m;
int nx, ny;
int res;
void dfs(int x, int y)
{
    map[x][y] = '.';

    for(int dx=-1;dx<=1;++dx)
        for(int dy=-1;dy<=1;++dy)
        {
            nx=x+dx, ny=y+dy;
            if(nx>=0&&ny>=0&&nx<n&&ny<m&& map[nx][ny]=='W') dfs(nx, ny);
        }
    return ;
}
void solve()
{
    //绘图
    cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j) 
            cin>>map[i][j];
    //dfs
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        {
            if(map[i][j]=='W'){
                dfs(i,j);
                res++;
            } 
        }
    cout<<res<<endl;
}
int main()
{
    solve();
}