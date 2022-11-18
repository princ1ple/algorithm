// Text Reverse
#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

stack<char> c;
string str;
int t;
int main()
{
    cin>>t;
    getchar(); //读入回车，防止误读
    while(t--)
    {
        getline(cin, str); //读入一行，包括空格与回车
        for(int i=0;i<str.size();++i)
        {
            if(str[i]!=' ') c.push(str[i]); 
            else{
                while(!c.empty()) //遇到空格就输出
                {
                    cout<<c.top(), c.pop();
                }
                cout<<' ';
            }
        }
        while(!c.empty()) cout<<c.top(), c.pop(); //输出剩余数据
        cout<<endl;
    }
    return 0;
}