#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}

void biggies(vector<string> &words,vector<string>::size_type sz)
{
    elimDups(words);    //∞¥◊÷µ‰–Ú≈≈–Ú
    stable_sort(words.begin(),words.end(),
    [](const string&a,const string &b){return a.size() < b.size();});
    auto wc  = find_if(words.begin(),words.end(),
                       [sz](const string &a){return a.size() >= sz;});
    auto count = words.end()-wc;
    cout<<count <<" of length "<<
    sz<<" or longer"<<endl;
    for_each(wc,words.end(),[](const string&s){cout<<s<<" ";});
    cout<<endl;
}
int main()
{
    vector<string> vec = {"aaa","bbb","aabb","bbcc","dd","fewafewf","a"};
    biggies(vec,2);
    return 0;
}