#include<iostream>
#include<initializer_list>
using namespace std;

//可变参数形参的函数
//数量未知，类型相同
int func(initializer_list<int> a)
{
    int sum = 0;
    for(auto i:a)
        sum+=i;
    return sum;
}
//可变数量的参数-特殊情况
int fun2(...)
{
    cout<<"fun2"<<endl;
    return 5;
}
int main()
{
    
    cout<<func({1,9,8,2})<<endl;
    cout<<func({1,2})<<endl;
    int a = fun2(9,7,8);
    cout<<a<<endl;
    return 0;
}