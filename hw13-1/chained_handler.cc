#include <iostream>
#include <string>

using namespace std;

class A{
	
};
class B:public A{
	
};
class C:public B{
	
};

int main(){
	int n;
	cout<<"input num(0~2): ";
	cin>>n;
	
	try{
		if(n==0)throw new A;
		else if(n==1)throw new B;
		else if(n==2)throw new C;
		else throw string("Invalid input");
	}catch(C*){
		cout<<"throw new C has been called"<<endl;
	}catch(B*){
		cout<<"throw new B has been called"<<endl;
	}catch(A*){
		cout<<"throw new A has been called"<<endl;
	}catch(string s){
		cout<<s<<endl;
	}
	return 0;
}
