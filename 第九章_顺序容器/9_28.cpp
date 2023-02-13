#include<iostream>
#include<forward_list>
using namespace std;

void func(forward_list<string> &fstring,const string string1,const string string2)
{
    auto prev = fstring.before_begin();
    auto cur = fstring.begin();
    while (cur != fstring.end())
    {
       if(*cur == string1)
       {
            auto temp = fstring.insert_after(cur,string2);
            return;
       }
       prev = cur;
       ++cur;
    }
    fstring.insert_after(prev,string2);
    return;
}
int main()
{
    forward_list<string> fstring = {"cneiwuohvouiehw","he","she","98989","45","fji","cvmekv"};
    
    string s1 = "45";
    string s2 = "100";
    func(fstring,s1,s2);
    func(fstring,";;;","99");
    for(auto i:fstring)
    {
        cout<<i<<endl;
    }
    return 0;
}