#include<iostream>
using namespace std;

int main()
{
    auto f = [](int a,int b){return a+b;};
    cout<<f(10,98)<<endl;
    return 0;
}