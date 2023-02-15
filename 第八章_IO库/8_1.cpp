#include <iostream>

std::istream& fun(std::istream& is){
	std::string buf;
	while(is >> buf){
		std::cout << buf << std::endl;	
	}
	is.clear();
	return is;
}

int main(){
	std::istream& is = fun(std::cin);
	std::cout << is.rdstate() << std::endl;
	return 0;
}
