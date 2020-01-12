#include <iostream>

using namespace std;

/*template<typename t>
auto maxt(t a, t b)->decltype(a >b ? a:b)
{

		cout << "calling decltype" << endl;
		return a >b?a:b ;
}*/

template <typename T>
T maxt( T a, T b)
{
	return a > b?a:b ;
}

template <typename T>
T* maxt ( T*a , T*b)
{
	cout << "calling pointer" << endl;
	return *a > *b ? a:b;
}

char const * maxt ( char const * s1 , char const *s2)
{
	return std::strcmp( s1, s2) < 0 ? s1 : s2;
}


int main()
{

int a = 5;
int b = 6;

cout << "max of (4,5) is " << maxt(a,b);

cout << "max of (4,5) is " << maxt(&a,&b);

char const * str1 = " test1";
char const * str2 = "test2";

cout << maxt(str1, str2) << endl;




}
