#include <iostream>

using namespace std;

class PassMessage{
private:
PassMessage(){
	cout << "this is hello world" ;
}
public:

};

int main(){
	PassMessage *ptr = new PassMessage();
}