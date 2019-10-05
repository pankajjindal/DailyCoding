#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

template <class T>
class Stack {
    private:
    std::vector<T> elem;
    public:
    void push( T const& ele);
    void pop();
    T const& top();
};

template <class T>
void Stack<T>::push( T const& ele)
{
    elem.push_back(ele);
} 			

template <class T>
void Stack<T>::pop()
{
    asset(!elem.empty());
}

template<class T>
T const& Stack<T>::top()
{
    assert(!elem.empty());
    return elem.back();
}

int main(){

Stack<int> s;
s.push(25);
cout << s.top() << endl;
}
