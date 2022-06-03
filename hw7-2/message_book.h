#include <vector>
#include <map>
#include <string.h>
#include <string>

class MessageBook{
	public:
		MessageBook();
		~MessageBook();
		void AddMessage(int, const std::string&);
		void DeleteMessage(int);
		std::vector<int> GetNumbers() const;
		const std::string& GetMessage(int) const;
		
	private:
		std::map<int, std::string> messages_;
};