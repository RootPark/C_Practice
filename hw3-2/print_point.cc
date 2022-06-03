#include <stdio.h>
#include <string.h>

typedef struct{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p){
	Point temp;
	temp.xpos = p->xpos * 2; 	
	temp.ypos = p->ypos * 2; 	
	return temp;
}

void swapPoint(Point& p1, Point& p2){
	Point p3; 	
	p3 = p1; 	
	p1 = p2; 	
	p2 = p3;
}
int main(void) {
	Point p1;
	Point p2;
	scanf("%d %d",&p1.xpos, &p1.ypos);
	p2=getScale2xPoint(&p1);
	printf("Calling getScale2xPoint()\np1 : %d %d\np2 : %d %d\n",p1.xpos, p1.ypos,p2.xpos,p2.ypos);
	swapPoint(p1,p2);
	printf("Calling swapPoint()\np1 : %d %d\np2 : %d %d",p1.xpos, p1.ypos,p2.xpos,p2.ypos);
}
