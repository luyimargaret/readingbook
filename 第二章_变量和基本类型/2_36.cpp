#include<iostream>
using namespace  std;

int main()
{
    int a = 3,b = 4;
    decltype(a) c = a;  //a = 4
    decltype((b)) d = a; //d = 4; b = 4;
    ++c;        //c = 4;
    ++d;
    cout<<a<<b<<c<<d<<endl;
    return 0;

}