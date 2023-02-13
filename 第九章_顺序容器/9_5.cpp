#include <vector>
#include <iostream>

using  Iter = std::vector<int>::iterator;

Iter find(Iter beg, Iter end, int x){
	while(beg!=end){
		if((*beg)==x) break;
		++beg;
	}
	return beg;
}

int main(){
	std::vector<int>vec={1,2,3,4,5,6,7};
    Iter it = find(vec.begin(),vec.end(),3);
	if(it!= vec.end()){
		std::cout << *it << std::endl;
	}else{
		std::cout << "no target" << std::endl;
	}
	return 0;
}
