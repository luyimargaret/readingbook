#include <cctype>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>

int main(){
	std::map<std::string,int>mp;
	std::string s;
	
	while(std::cin >> s){
		for(auto &c:s)c = tolower(c);
		s.erase(std::remove_if(s.begin(), s.end(),ispunct),s.end());
		++mp[s];
	}
	
	for(const auto& e:mp){
		std::cout << e.first << " " << e.second << std::endl;
	}
	return 0;
}
