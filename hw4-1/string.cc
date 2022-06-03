#include <iostream>
#include <string>

int main() {
	std::string a;
	std::string b;
	std::string strsum;
	
	std::cin>>a;
	std::cin>>b;
	
	strsum=a+b;
	
	std::cout<<strsum<<std::endl;
	std::cout<<a[0]<<std::endl;
	std::cout<<b.substr(b.length()-1,b.length())<<std::endl;
}