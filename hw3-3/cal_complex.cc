#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	double real;
	double img;
}Complex;

Complex printAddComp(Complex,Complex);
Complex printMulComp(Complex,Complex);
void printComplex(double a,double b);

int main(void) {
	double a,b;
	printComplex(a,b);
}

void printComplex(double a,double b){
	Complex c1;
	Complex c2;
	Complex add;
	Complex mul;
		scanf("%lf %lf %lf %lf",&c1.real, &c1.img, &c2.real, &c2.img);
		printf("Complex number1 : \n%f + %fi\n",c1.real, c1.img);
		printf("Complex number2 : \n%f + %fi\n",c2.real, c2.img);
		add=printAddComp(c1, c2);
		mul=printMulComp(c1, c2);
		printf("Sum : \n%f + %fi\n",add.real,add.img);
		printf("Multiplication : \n%f + %fi\n",mul.real,mul.img);

}
Complex printAddComp(Complex Add1, Complex Add2){
	Complex add;
	add.real = Add1.real + Add2.real;
	add.img = Add1.img + Add2.img;
	return add;
}

Complex printMulComp(Complex Mul1, Complex Mul2){
	Complex mul;
	mul.real = (Mul1.real * Mul2.real) - (Mul1.img * Mul2.img);
	mul.img = (Mul1.img * Mul2.real) + (Mul1.real * Mul2.img);
	return mul;
}
