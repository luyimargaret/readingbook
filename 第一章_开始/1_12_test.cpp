#include<iostream>
using namespace std;
int main()
{
int sum = 0;
for(int i = -100;i <= 100;++i)
{
    sum+=i;
}
cout<<sum<<endl;
return 0;
}
//计算从-100-100的和 终值是0
