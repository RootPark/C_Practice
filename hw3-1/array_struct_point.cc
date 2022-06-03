#include <stdio.h>
#include <string.h>

typedef struct{
	int xpos;
	int ypos;
}Point;

void scale2x(Point* pp)
{
	pp->xpos*=2;
	pp->ypos*=2;
}
int main(){
	int i,j;
	Point p[3];
	for(i=0;i<3;i++){
		scanf("%d %d",&p[i].xpos,&p[i].ypos);
		scale2x(&p[i]);
	}
	for(j=0;j<3;j++){
		printf("[%d] %d %d\n",j,p[j].xpos,p[j].ypos);
	}
	return 0;
}
