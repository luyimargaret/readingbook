#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    cout<<"����������������"<<endl;
    int a = 0,b = 0;
    cin>>a>>b;
    if(b == 0)
    {
        throw runtime_error("��������Ϊ0��");
    }
    cout<<a/b<<endl;

    return 0;
}