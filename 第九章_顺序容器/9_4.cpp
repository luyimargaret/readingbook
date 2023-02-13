#include <vector>
#include <iostream>

using  Iter = std::vector<int>::iterator;

bool find(Iter beg, Iter end, int x){
	while(beg!=end){
		if((*beg)==x)return true;
		++beg;
	}
	return false;
}

int main(){
	std::vector<int>vec={1,2,3,4,5,6,7};
	if(find(vec.begin(),vec.end(),3)){
		std::cout << "yes" << std::endl;
	}else{
		std::cout << "no" << std::endl;
	}
	return 0;
}
