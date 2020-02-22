#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class Base{
public:
virtual void method() const=0;
virtual ~Base(){}
};

struct A : public Base{
void method() const { cout << "inside method of A" << endl;}
~A(){cout << "A destroyed " << endl;}
};

struct B : public Base {
void method() const { cout << "inside method of B" << endl;}
~B(){cout << "B destroyed " << endl;}
};


int main()
{
	vector<std::unique_ptr<Base>> vec;

	vec.push_back(std::make_unique<A>());
	vec.push_back(std::make_unique<B>());

	vector<std::unique_ptr<Base>> :: iterator iter;

	for(iter=vec.begin() ; iter!=vec.end();iter++)
	{
 		(*iter)->method();
	}

	return 0;
}
