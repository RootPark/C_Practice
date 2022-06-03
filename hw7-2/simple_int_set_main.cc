#include <iostream>
#include <string>
#include <set>
#include <stdlib.h>
#include "simple_int_set.h"

using namespace std;

void PrintSet(set<int>& s);
int findSpace(const string& str){
	int space =0;
	for(int i=0;i<strlen(str.c_str()); i++){
		if(str[i]==' '){
			space++;
		}
	}
	return space;
}
bool ParseSet(const string& str, set<int> *s) {
	int setNum=findSpace(str);
	char* charStr=new char[strlen(str.c_str())+1];
	strcpy(charStr, str.c_str());
	if(str[0]=='{'&& str[1]==' '&&str[strlen(str.c_str())-1]=='}'&&str[strlen(str.c_str())-2]==' '){
		int input_num;
		for(int i=0;i<setNum;i++){
			if(i==0){
				input_num=atoi(strtok(charStr," "));
			}
			else{
				input_num=atoi(strtok(NULL," "));
				s->insert(input_num);
			}
		}
		return 1;
	}
	else return 0;
}

size_t GetOperator(const string& str) {
	auto op_pos = str.find_first_of("+");
	if (op_pos == string::npos) op_pos = str.find_first_of("*");
	if (op_pos == string::npos) {
		auto temp = str.find_first_of("-");
		while (temp != string::npos && str.at(temp + 1) != ' ')
			temp = str.find_first_of("-", temp + 1);
		op_pos = temp;
	}

	return op_pos;
}

bool InputSet(set<int> *s0, set<int> *s1, string& op) {
	s0->clear(), s1->clear();

	string line;
	getline(cin, line);

	auto op_pos = GetOperator(line);
	
	if (op_pos == string::npos) return false;
	else op = line.at(op_pos);

	return ParseSet(line.substr(0, op_pos - 1), s0) && ParseSet(line.substr(op_pos + 2), s1);
}

void PrintSet(set<int>& s) {
	cout << "{";
	for (auto it = s.begin(); it != s.end(); ++it) cout << " " << *it;
	cout << " }" << endl;
}

int main() {
	set<int> s0, s1;
	string op;

	while (true) {
		bool valid = InputSet(&s0, &s1, op);
		if (!valid) break;

		auto res = (op == "+") ? SetUnion(s0, s1) :
					(op == "-") ? SetDifference(s0, s1) : SetIntersection(s0, s1);
		PrintSet(res);
	}

	return 0;
}