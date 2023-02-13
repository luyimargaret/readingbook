#include<iostream>
using namespace std;
int main()
{
int sum = 0,value = 0;
cout<<"请输入你想求和的一组数据:"<<endl;
while (cin>>value)
{
    sum+=value;
}
cout<<sum<<endl;
return 0;
}
