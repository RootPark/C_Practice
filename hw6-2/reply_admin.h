#include<string>
#include<iostream>
#include<string.h>
char **split(char *str, const char *delim);
class ReplyAdmin{
	private:
		std::string* chats;
	public:
		ReplyAdmin();
		~ReplyAdmin();
		
		int getChatCount();
		bool addChat(std::string);
		bool removeChat(int );
		bool removeChat(int*, int);
		bool removeChat(int, int);
		std::string show(int i);
		void sort();
};
