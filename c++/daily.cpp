//1) templates 

#define one

#include<iostream>
#include <string>

#ifdef one
using namespace std;

template <typename T>

T maxof( T a, T b)
{
	return ( a>b ? a:b);
}

int maxofint(int a, int b)
{
    return ( a>b ? a:b);
}


int main()
{
	cout << maxof<int> (6,9) << endl;
	cout << maxof<const char *> ("aaa","bbb") << endl;
	cout << maxof<string> ("aaa","bbb") << endl;
}
#endif //one

==========================================================================================

//stack code 

class BMW: public std::exception{
	const char * msg;
	BWex();//no default constructor
public:
	BWex( const char * s): throw() msg(s) {}
	const char * what() const throw() {return msg;}

};

template<typename T>
class stack {
	static const int defaultSize =10;
	static const int maxSize = 1000;
	int S_top;
	int S_size;
	T* stackPtr;
	public:
	explicit stack(int s = defaultSize);
	~stack() { if (stackPtr) delete[] stackPtr;}
	T & push(T &);
	T& pop ();
	bool isFull () { return S_top >= S_size -1;)
	bool isEmpty() { return S_top < 0;)
	int top() { return S_top;)
	int size() { return S_size;)
};

template <typename T>
stack<T>::stack(int s)
{
	if (s > maxSize || s < 1) throw BWex(" invalid stack size");
	else s_size =s;
	stackPtr = new T[s_size];
	S_top = -1;
}

template < typename T>
T& stack<T>::push(int t)
{
	if(isFull()) throw BWex("stack full");
	return stackPtr[++S_size] = t;	
}

template <typename T>
T& stack<t>:: pop()
{
	if(isEmpty()) throw BWex("stack empty");
	return stackPtr[S_size--];
}


int main()
{
try{


	stack<int> si(5);

	cout << " size of s int" << si.size();
	cout << " size of top of s int" << si.top();

	for( int i = {1,2,3,4,5})
	    si.push(i);

	cout << " size of s int after push" << si.size();
	cout << " size of top of s int after push" << si.top();

	while(!si.isEmpty())
	{
	    std::cout << "popped" << si.pop() << endl;
	}

	stack<std::string> ss(5);
	
	cout << " size of ss int after push" << ss.size();
	cout << " size of top of ss int after push" << ss.top();

	for( const char *s : { "one" , "two", "three", "four", "five"})
	{
		ss.push(s);
	}
		
	while(!ss.isEmpty())
	{
	    std::cout << "popped" << ss.pop() << endl;
	}
} catch (BWex &e) {
	std::cout << " Stack error" << e.what() << std::endl;
}
}

