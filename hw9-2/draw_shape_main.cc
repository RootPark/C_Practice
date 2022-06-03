#include <iostream>
#include <vector>
#include <string>
#include "draw_shape.h"
#include <cstddef>

using namespace std;

int main() {
	vector<Shape *> shapes;

	int cheight, cwidth;
	cin >> cheight >>  cwidth;

	Canvas canvas(cheight, cwidth);
	canvas.Print();

	string cmd;
	while (true) {
		cin >> cmd;

		if (cmd == "quit") break;
		else if (cmd == "draw") {
			for(int i=0;i<shapes.size();i++){
				shapes[i]->Draw(&canvas);
			}
			canvas.Print();
		} 
		else if (cmd == "dump") {
			for(int i=0;i<shapes.size();i++){
				cout<<i<<" ";
				shapes[i]->printInfo();
			}
		} 
		else if (cmd == "delete") {
			int input;
			vector<Shape*>::iterator it;
			cin>>input;
			if(input<shapes.size()){
				it=shapes.begin()+input;
				shapes.erase(it);
			}		
		} 
		else if (cmd == "resize") {
			cin >> cheight >> cwidth;
			canvas.Resize(cheight, cwidth);
		} 
		else if (cmd == "add") {
			string type;
			int x, y;
			char brush;
			cin >> type >> x >> y;

			if (type == "rect") {
				cin>>cheight>>cwidth>>brush;
				shapes.push_back(new Rectangle(x,y,cheight,cwidth,brush));
				} 
			else if (type == "tri_up") {
				cin>>cheight>>brush;
				shapes.push_back(new UpTriangle(x,y,cheight,brush));
				} 
			else if (type == "tri_down") {
				cin>>cheight>>brush;
				shapes.push_back(new DownTriangle(x,y,cheight,brush));
			} 
			else if (type == "diamond") {
				cin>>cheight>>brush;
				shapes.push_back(new Diamond(x,y,cheight,brush));
			}
		}
	}

	return 0;
}
