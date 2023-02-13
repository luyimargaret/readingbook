#include<iostream> 
using namespace std;
 int main()
 {
    int val1,val2;
    cout<<"请输入两个整数："<<endl;
    cin>>val1>>val2;
    if(val1>val2) swap(val1,val2);
    int start = val1;
    while (start <= val2)
    {
        cout<<start<<endl;
        ++start;
    }
    return 0;
 }