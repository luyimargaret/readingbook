#include<iostream>
#include<vector>
using namespace std;
class StrBlob
{
private:
    shared_ptr<vector<string>> data;
    void check(size_type i,const string & msg) const;
public:
    typedef vector<string>::size_type size_type;
    StrBlob(/* args */);
    StrBlob(initializer_list<string> i1);
    size_type size()const(return data->size;)
    bool empty()const {return data->empty;}

    //添加或删除元素
    void push_back(const string &t) {data->push_back(t);}
    void pop_back();
    //元素访问
    string & front();
    string & back();
};

StrBlob::StrBlob(/* args */):data(make_shared<vector<string>>)
{

}
StrBlob::StrBlob(initializer_list<string> i1):data(make_shared<vector<string>>(i1))
{

}
void StrBlob::check(size_type i,const string & msg) const
{
    if(i >= data.size())
        throw out_of_range(msg);
}
 void StrBlob::pop_back()
 {
    check(0,"pop_back on empty StrBlob");
    data->pop_back();
 }
    //元素访问
    string & StrBlob::front()
    {
         check(0,"front on empty StrBlob");
         return data->front();
    }
    string & StrBlob::back()
    {
        check(0,"back on empty StrBlob");
         return data->back();
    }