#include <iostream>
#include <stdio.h>
using namespace std;

#include<memory>


class MakeAString{
	public:
	MakeAString():mystring{"hello world"}
	{}

        void ReverseString(char *str) const noexcept{
		if(str==NULL)
		    return;
		//ReverseString(*(str+1));
		//putchar(*(str+1));
	}

	private:
	std::string mystring;
};



int main(){

	auto prt = std::make_shared<MakeAString>();
	prt->ReverseString("hello world");
        return 1;
}
