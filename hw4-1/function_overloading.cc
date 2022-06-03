#include <iostream>

void add(int a, int b);
void add(std::string a, std::string b);
void add(int a, int b){
	std::cout<<a+b<<std::endl;
}

void add(std::string a, std::string b){
	std::cout<<a<<"-"<<b<<std::endl;
}

int main(){
	int num1,num2;
	std::string str1,str2;
	std::cin>>num1>>num2;
	std::cin>>str1>>str2;
	add(num1,num2);
	add(str1,str2);

}