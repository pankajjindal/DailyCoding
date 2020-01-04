#include <iostream>

using namespace std;

template <typename T=float>

struct cat {
    T val;
    cat():val() {}
    cat( T t) : val(t) {}
    void printcat(){
    	cout << "val is" << val;
    }
};

int main() 
{
	cat c1(1);
	cat c2 = c1;

	std::unique_ptr<cat<int>> p1 { new cat{5}};

	//auto p2 = std::make_shared(cat) p2 {std::move(p1));

	p1->printcat();




}
