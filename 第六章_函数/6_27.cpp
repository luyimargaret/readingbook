#include<iostream>
#include<initializer_list>
using namespace std;

//�ɱ�����βεĺ���
//����δ֪��������ͬ
int func(initializer_list<int> a)
{
    int sum = 0;
    for(auto i:a)
        sum+=i;
    return sum;
}
//�ɱ������Ĳ���-�������
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