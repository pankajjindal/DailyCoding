#include<iostream>
#include <vector>

using namespace std;

int main()
{

std::vector<int> v1{1,2,3,4};
std::vector<int> v2;
std::vector<int> v3 = v1; //copy constructor

//reserve the memory
v2.reserve(80);

// assignment as swap
v2=std::move(v1);

//size operations

//comparisions

//element access

for ( const auto& elem: v3)
{
std::cout << "v3  " << elem << std::endl;
}
//reverse access 

for ( auto pos=v1.begin();pos!=v1.end();++pos)
    cout << *pos << endl;

return 0;

}
