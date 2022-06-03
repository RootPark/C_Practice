#include <iostream>

using namespace std;
int main(){
	int num1, num2;
	string w1, w2;
	cin>>num1>>num2;
	cin>>w1>>w2;
	
	cout<<"n1: "<<num1<<", n2: "<<num2<<", s1: "<<w1<<", s2: "<<w2<<endl;
	swap(num1,num2);
	swap(w1,w2);
	cout<<"n1: "<<num1<<", n2: "<<num2<<", s1: "<<w1<<", s2: "<<w2<<endl;
}
void swap(int& n1, int& n2){
	int temp=n1;
	n1=n2;
	n2=temp;
}
void swap(std::string& s1, std::string& s2){
	string tempp=s1;
	s1=s2;
	s2=tempp;

}
