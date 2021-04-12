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

// Type your code here, or load an example.
//stack code 
#include<iostream>
#include <exception>
#include<string>

using namespace std;
class BWex: public std::exception{
	const char * msg;
	BWex();//no default constructor
public:
	BWex( const char * s) throw() : msg(s) {}
	const char * what() const throw() {return msg;}

};

template<typename T>
class Stack {
	static const int defaultSize =10;
	static const int maxSize = 1000;
	int S_top;
	int S_size;
	T* stackPtr;

    public:
	explicit Stack(int s = defaultSize);
	~Stack() { if (stackPtr) delete[] stackPtr;}
	T & push(T &);
	T& pop ();
	bool isFull() { return S_top >= S_size -1;}
	bool isEmpty() { return S_top < 0;}
	int top() { return S_top;}
	int size() { return S_size;}
};

template <typename T>
Stack<T>::Stack(int s)
{
	if (s > maxSize || s < 1) throw BWex(" invalid stack size");
	else S_size =s;
	stackPtr = new T[S_size];
	S_top = -1;
}

template < typename T>
T& Stack<T>::push(T& t)
{
	if(isFull()) throw BWex("stack full");
	return stackPtr[++S_size] = t;	
}

template <typename T>
T& Stack<T>:: pop()
{
	if(isEmpty()) throw BWex("stack empty");
	return stackPtr[S_size--];
}


int main()
{
try{


	Stack<int> si(5);

	cout << " size of s int" << si.size();
	cout << " size of top of s int" << si.top();

	for( int i : {1,2,3,4,5})
	    si.push(i);

	cout << " size of s int after push" << si.size();
	cout << " size of top of s int after push" << si.top();

	while(!si.isEmpty())
	{
	    std::cout << "popped" << si.pop() << endl;
	}

	Stack<std::string> ss(5);
	
	cout << " size of ss int after push" << ss.size();
	cout << " size of top of ss int after push" << ss.top();

	for( const char *s : { "one" , "two", "three", "four", "five"})
	{
	//	ss.push(s);
	}
		
	while(!ss.isEmpty())
	{
	    std::cout << "popped" << ss.pop() << endl;
	}
} catch (BWex &e) {
	std::cout << " Stack error" << e.what() << std::endl;
}
}
===============================================================================================================
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {

//checking vector

vector<int> veci = {1,2,3,4,5,6,7,8,9,10};

cout << " size of the vector" << veci.size() << endl;
cout << " element at 5 " << veci[5] << endl;
cout << " element at 5" << veci.at(5) << endl;
cout << " front of vector " << veci.front() << endl;
cout << " back of vector" << veci.back() <<end; // this is not compiling ??

//vector itrators
vector<int>::iterators itbegin = veci.begin();
vector<int>::iterators itend = veci.end();


for( auto i : { itbegin , itend})
  cout << *i << endl;

// insert at 42 at begin +5

//erase vector at begin +5


//change is size of vector with insertion and deletion
//veci.

//vector of strings


vector<std::string> vecs = { "one", "two", "three", "four","five"};

for ( const string & str : vs)
 cout << str <<endl


}                                      
====================================pointers ================================================

#include<stdio.h>

char f[] = { " apples" , " bananas " , " pears " , " mango" };

int main()
{
	for( int x =0;x<4;x++)
	    printf( " the frits are %p = %s \n", f[x]); 


}

========================================================================
#include<stdio.h>


int main()
{
        char *f[] = { "apples123" , "bananas " , "pears " , "mango" };

        char **ff ;
        int y;
        ff = f;
        for( int x =0;x<4;x++){
            printf( " the frits are %p = %s \n", f[x], f[x]);
            printf( " the frits are %p = %s \n", *(f+x), *(f+x));
            printf( " the frits are %p = %c \n", *ff,**ff);
            y=0;
            while( *(*ff+y)){
                putchar(*(*ff+(y++)));
            }
            putchar('\n');
//            printf( " the frits are %p = %s \n", *ff, *ff);
            ff++;
//          printf( " the frits are %p = %s \n", *(ff+x), *(ff+x));
        }


}
============================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
        char * day1 = "Monday";
        char * day2 = "Tuesday";
        char * day3 = "Wednesday";
        char * day4 = "Thursday";
        char * day5 = "Friday";
        char * day6 = "Saturday";
        char * day7 = "SUnday";
        char ** week;

        week = (char **)malloc ( sizeof(char*) * 7);
        if( week == NULL){
                fprintf(stderr,"not enough memeory");
                return 0;
        }
        *(week+0) = day1;
        *(week+1) = day2;
        *(week+2) = day3;
        *(week+3) = day4;
        *(week+4) = day5;
        *(week+5) = day6;
        *(week+6) = day7;

        for( int x=0;x<7;x++){
            printf( " day %d =%s \n",x,week[x]);
        }

}
==================================================================================
                                        
