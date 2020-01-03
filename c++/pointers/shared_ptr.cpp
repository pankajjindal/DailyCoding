#include <iostream>
#include <memory>
#include <future>

using namespace std;

void func( int x,int y)
{
  cout << " out of func is x*y : "<< x*y << endl;
}
auto l = [] (int x, int y) {  cout << " out of lambda is x+y : "<< x+y << endl; };

class C {

public :
void operator () (int x, int y ) const{
  cout << " out of  () is x*y : "<< x*y << endl;
}
void memfunc(int x, int y) const{
  cout << " out of memfunc is x*y : "<< x*y << endl;
}
};

int main()
{

C c;
std::shared_ptr<C> sp(new C);

//using bind
std::bind(func, 77, 30)();
std::bind(l, 77, 30)();
std::bind(C(), 77, 30)(); //calls C() operator
std::bind(&C::memfunc,c, 77, 30)(); 
std::bind(&C::memfunc,sp, 77, 30)(); 


std::async(func, 77, 33);
std::async(l, 77, 33);
std::async(C(), 77, 33); //calls C() operator
std::async(&C::memfunc,c, 77, 33); 
std::async(&C::memfunc,sp, 77, 33); 

}
