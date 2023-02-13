#include<iostream>
using namespace std;
int main()
{
   cout<<"/*";   //合法输出/*
   cout<<"*/";   //合法输出*/
   //cout<</*"*/"*/; 非法 
   //下一句也非法
    return 0;
}