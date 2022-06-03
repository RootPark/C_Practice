using namespace std;
class Animal{
	protected:
		string name;
		int age;
	public:
		Animal(string,int);
		virtual ~Animal(){};
		virtual void printInfo();
};
class Zebra:public Animal{
	private:
		int numStripes;
	public:
		Zebra(string,int,int);
		virtual ~Zebra(){};
		virtual void printInfo();
};
class Cat:public Animal{
	private:
		string favoriteToy;
	public:
		Cat(string,int,string);
		virtual ~Cat(){};
		virtual void printInfo();
};
