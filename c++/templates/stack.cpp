#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

template<typename T>
class mystack{
private:
   std::vector<T> stack;
public:
   void push(T const& a);
   T pop();
   bool empty();
   void emptyWhole();
   //T top();
};

template<typename T>
bool mystack<T>::empty(){
    return stack.empty();
}

template<typename T>
void mystack<T>::push(T const& a){
stack.push_back(a);
}

template<typename T>
T mystack<T>::pop() {
assert(!stack.empty());
return stack.back();
}

template<typename T>
void mystack<T>::emptyWhole() {
    while(!stack.empty()){
	 cout << stack.back() <<endl;
         stack.pop_back();
}

}

int main(){

   mystack<int> *s = new mystack<int>();
   s->push(2);
   s->push(1);
   s->push(1);
   s->push(1);
   s->push(1);
   s->emptyWhole();
   //cout << s->pop() << endl;
   //cout << s->pop() << endl;

   using intStack = mystack<int>;
   intStack iStack;
 
   iStack.push(10);

   iStack.push(11);
   return 0;
   
}
