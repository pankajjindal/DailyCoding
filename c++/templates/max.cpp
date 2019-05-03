#include <iostream>
#include <string>

template<typename T>
T max( T a, T b)
{
	return a > b ? a:b;
}

void main(){
	int i=6,j=7;
	cout << "max of max(6,7)" << max(i,j) <<endl;

	double i=6.9,j=-7.1;
	cout << "max of max(6,7)" << max(i,j) <<endl;

	std::string  t1 = "Mathmatics";
	std::string  t2 = "Maths";

	cout << "max of max(t1,t2)" << max(t1,t2) <<endl;
}