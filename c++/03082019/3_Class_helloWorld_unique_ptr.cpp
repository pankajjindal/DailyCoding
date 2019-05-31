#include <iostream>

using namespace std;

class PassMessage{
public:
PassMessage(){
	cout << "this is hello world" ;
}

};

int main(){
	std::unique_ptr<PassMessage> ptr (new PassMessage());
}