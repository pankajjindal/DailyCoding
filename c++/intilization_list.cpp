#include <iostream>

using namespace std;

class test{

public:
test(int,int);
test(std::initializer_list<int>);
explicit test(int,int,int){

cout << "this calls explicit" << endl;
}

};

test::test(int a,int b ){
cout << "this calls int ,int" << endl;
}

test::test(std::initializer_list<int> a){
cout << "this calls initializer list " << endl;

}

int main()
{
   test t(2,3);
   test t1{2,3};
   test t2{2,3,4};
   test s= {77,55};
   test s1= {77,55,66};
   return 0;

}
