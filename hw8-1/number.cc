#include "number.h"

Number::Number(){
	_num=0;
}
Number::Number(int num){
	_num=num;
}
void Number::setNumber(int num){
	_num=num;
}
int Number::getNumber(){
	return _num;
}
int Square::getSquare(){
	return Square::getNumber()*Square::getNumber();
}
int Cube::getCube(){
	return Cube::getNumber()*Cube::getNumber()*Cube::getNumber();
}