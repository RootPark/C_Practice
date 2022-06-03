#include <map>
#include <vector>
#include <string.h>
#include <string>
#include "message_book.h"

MessageBook::MessageBook(){ 
	
}
MessageBook::~MessageBook(){ 

}

void MessageBook::AddMessage(int number, const std::string& message){
	if(messages_.empty()==0){
		messages_.erase(number);
		messages_.insert(make_pair(number, message));
	}
}

void MessageBook::DeleteMessage(int number){
	messages_.erase(number);
}

std::vector<int> MessageBook::GetNumbers()const{
	std::vector<int> v;
	for(auto iter= messages_.begin(); iter!=messages_.end();++iter){
		v.push_back(iter->first);
	}
	return v;
}

const std::string& MessageBook::GetMessage(int number)const{
	return messages_.at(number);
}