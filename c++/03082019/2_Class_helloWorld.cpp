#include <iostream>

using namespace std;

class PassMessage{
public:
PassMessage(){
	cout << "this is hello world" ;
}
public:

};

int main(){
	PassMessage *ptr = new PassMessage();
	auto ptr1 = std::make_unique<PassMessage> ;


}