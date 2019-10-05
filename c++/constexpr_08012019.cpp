#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
constexpr T maxt( T a, T b)
{
 return a >b ? a:b;
}

int main()
{

int a[::maxt(sizeof(int),100)];

cout << "size of a is " << sizeof(a);

}
