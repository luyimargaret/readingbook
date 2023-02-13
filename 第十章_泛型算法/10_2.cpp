#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    vector<double> vec = {5.2,8.2,9.1,6.3,5.0};
    double sum = accumulate(vec.cbegin(),vec.cend(),0);
    cout<<sum<<endl;
    return 0;
}