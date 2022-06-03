#include <stdio.h>


typedef struct{
	double x;
	double y;
}Point;

typedef struct{
	char name[7];
	Point points[3];
}Person;

void compareNum(Point a,Point b,Point c);

int main(void){
	int i,j,k;
	Person p[3];
	for(i=0;i<3;i++){
		scanf("%s ",((p+i)->name));
		for(j=0;j<3;j++){
			scanf("%lf %lf",&p[i].points[j].x,&p[i].points[j].y);
		}
	} 
	for(k=0;k<3;k++){
		printf("%s ",((p+k)->name));
		compareNum(p[k].points[0],p[k].points[1],p[k].points[2]);
	}
}

void compareNum(Point a,Point b,Point c){
	Point max;
	double A,B,C,x;
	A=(a.x * a.x)+(a.y * a.y);
	B=(b.x * b.x)+(b.y * b.y);
	C=(c.x * c.x)+(c.y * c.y);
	if(A>B&&A>C){
		max.x=a.x;
		max.y=a.y;
	}
	else if(B>C){
		max.x=b.x;
		max.y=b.y;
		}	
	else{
		max.x=c.x;
		max.y=c.y;
		}
	printf("(%f, %f)\n",max.x,max.y);
}
