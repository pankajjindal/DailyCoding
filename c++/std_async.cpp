#include <future>
#include <thread>
#include <iostream>

using namespace std;

int main()
{
    cout << "main thread id " << this_thread::get_id() << endl;

    future<int> f1 = async(launch::async, [](){
        cout << "future run on thread " << this_thread::get_id() << endl;
        return 1;
    });

    f1.get(); 

    future<int> f2 = async(launch::async, [](){
        cout << "future run on thread " << this_thread::get_id() << endl;
        return 1;
    });

    f2.get();

    future<int> f3 = async(launch::async, [](){
        cout << "future run on thread " << this_thread::get_id() << endl;
        return 1;
    });

    f3.get();

    cin.ignore();

    return 0;
}
