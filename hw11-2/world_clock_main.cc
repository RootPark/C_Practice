#include <iostream>
#include <string>
#include "world_clock.h"

using namespace std;

int main() {
	string input;
	int num;
	WorldClock C;
	while(1){
		cin>>input;
		if(input=="set"){
			cin>>C;
		}
		else if(input=="tick"){
			cin>>num;
			C.Tick(num);
		}
		else if(input=="quit"){
			break;
		}
		cout<<C;
	}
	return 0;
}