#include<iostream>

using namespace std;

template <typename T>
class MinimumHeap{
public:
    void insert ( T t);
    void printHeap();

private:
    T * harr;//pointer to array of the heap
    //TODO (Pankaj) change this to shared pointer;
    int capacity;
    int heap_size;

};


MinimumHeap::MinimumHeap(int t):capacity(t),harr(new T[t]),heap_size(0){}

MinimumHeap::insert(T t){
    if(heap_size == capacity)
        return -1;
    
    heap_size++;
}


int main()
{
    MinimumHeap<int> *minHeap = new MinimumHeap(10);

}
