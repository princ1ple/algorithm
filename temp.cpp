#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char ch;
    while(ch!='\n')
    {
        ch=getchar();
        cout<<ch;
    }
    return 0;
}