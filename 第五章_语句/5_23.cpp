#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    cout<<"请输入两个整数："<<endl;
    int a = 0,b = 0;
    cin>>a>>b;
    if(b == 0)
    {
        throw runtime_error("除数不能为0！");
    }
    cout<<a/b<<endl;

    return 0;
}