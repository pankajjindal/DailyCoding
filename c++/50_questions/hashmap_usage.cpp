#include<iostream>
#include<map>
#include <iterator>
#include <unordered_map>

using namespace std;

int main()
{

std::unordered_map<int, int > order;

order[1]=10;
order[2]=20;

order.insert(std::pair<int,int>(3,30));

order.insert(std::pair<int,int>(5,50));

order.insert(std::pair<int,int>(4,40));


std::unordered_map<int,int>::iterator iter;

for( iter = order.begin(); iter != order.end() ;iter++)
{

	//cout << iter->first << " " << iter->second << '\n';

} 

std:unordered_map<int,int> order2 (order.begin(), order.end());

for( iter = order2.begin(); iter != order2.end() ;iter++)
{

	//cout << iter->first << " " << iter->second << '\n';

} 

cout << order.find(1)->second++;
cout << order.find(1)->second;


return 0;

}
