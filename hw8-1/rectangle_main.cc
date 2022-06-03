#include <iostream>
#include <string>
#include "rectangle.h"

using namespace std;
int main() {
	string input;
	int H, W;
	int L;
	while(1){
		cin>>input;
		if(input=="nonsquare"){
			cin>>H;
			cin>>W;
			NonSquare NSqu=NonSquare(H,W);
			NSqu.print();
		}
		else if(input=="square"){
			cin>>L;
			Square Squ=Square(L);
			Squ.print();
		}
		else if(input=="quit"){
			break;
		}
	}
}