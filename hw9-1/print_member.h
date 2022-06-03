using namespace std;
class A{
	private:
		int *memberA;
	public:
		A(int);
		virtual ~A();
		virtual void print();
};
class B: public A{
	private:
		double *memberB;
	public:
		B(double);
		virtual ~B();
		virtual void print();
};
class C: public B{
	private:
		string *memberC;
	public:
		C(string);
		virtual ~C();
		virtual void print();
};