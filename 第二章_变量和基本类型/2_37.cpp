#include<iostream>
using namespace  std;

int main()
{
    //�м� decltype(���ʽ) ���ʽ����ִ�� 
    int a = 3,b = 4;
    decltype(a) c = a;  //c = 3
    decltype(a = b) d = a; //d = 3 a = 3  b = 4
    cout<<a<<b<<c<<d<<endl;  
    return 0;

}