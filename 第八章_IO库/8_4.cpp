#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void read(const string &infile,vector<string> &res)
{
    ifstream input(infile);
    if(input)
    {
    string buf;
    while (getline(input,buf))
    {
        res.push_back(buf);
    }
    }
}
void print(const vector<string> &vec)
{ 
    for(auto s:vec)
    {
        cout<<s<<endl;
    }
}
int main()
{
    vector<string> res;
    read("test.txt",res);
    print(res);
    return 0;
}
