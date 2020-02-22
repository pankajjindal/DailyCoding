#include<iostream>

using namespace std;

class test{
public:
	int num;
	string name;
	
public:
	test(int a, string str):num(a),name(str){}

	test()=default;
	
	void printTest()
	{
		cout << "num " << num << " name " << name <<endl;
	}

	test& operator=(const test& test)
	{
		cout << "assignment operator called " << endl;
		this->num = test.num;
		this->name = test.name;
		return *this;
	}  

	test(const test& t)
	{
		cout << " copy contrutor called " <<endl;
		//num = t.num;
		//name = t.name;
		this = t;
	}
};

void p_m(test t)
{

		cout << "num " << t.num << " name " << t.name <<endl;
}

int main()
{
	test t(10,"mike"), t1,t2,t3;
	t.printTest();
 	test t4 =t;
        test t5 = t3 = t2 = t1 = t;
        t1.printTest();
        t5.printTest();
	return 0;
}
