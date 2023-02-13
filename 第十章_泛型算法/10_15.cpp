#include<iostream>
using namespace std;

int main()
{
 int a = 9;
  auto f = [a](int b){return a+b;};
    cout<<f(10)<<endl;
    return 0;
}