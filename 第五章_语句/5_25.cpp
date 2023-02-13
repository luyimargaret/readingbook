#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    cout<<"请输入两个整数："<<endl;
    int a = 0,b = 0;
    while (cin>>a>>b)
    {
        try
        {
            if(b == 0)
            throw runtime_error("aaa");
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << "\n Try Again?Enter y or n"<<endl;
            char c;
            cin>>c;
            if(!cin || c == 'n')
                break;
        }
        cout<<a/b<<endl;
    }
    
    return 0;
}