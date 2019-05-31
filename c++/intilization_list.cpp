#include <iostream>

class Test{

public:
test(int,int);
test(std::intilizer_list<int>);

};

void test(int a,int b ){
cout << "this calls int ,int" << a <<" "<< b<< endl;
}

void test(std::intilizer_list<int l>){

std::<intilizer_list::iterator iter;

for( iter = l.start() ;iter != l.end();iter++
{
	cout << iter << endl;
}

}

main()
[
Test t(2,3);
}