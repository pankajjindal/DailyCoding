#include<iostream>
#include <stack>
#include <memory>
#include <vector>

using namespace std;	


//using std::pair<stack, int> sp;

stack<int> * climbStairsUtil( int stairsleft, std::shared_ptr<std::vector<int>> hops,stack<int> s )
{
	if (stairsleft == 0)
		return &s;
	if (stairsleft < 0)
		return NULL;
	for( auto hop : *hops)
	  climbStairsUtil(stairsleft-hop , hops, s.push(hop));
    

}

void climbStairs(int stairsleft, std::shared_ptr<std::vector<int>> hops){
	stack<int> *s_out;
	stack <int> s1;
	s_out = climbStairsUtil(stairsleft,hops,s1);
	if (s_out !=NULL)
		while (!s_out.empty())
		{
			cout << s_out.pop() << "<-";
		}

}

int main(){
	int stairsleft = 4;
	std::shared_ptr<std::vector<int>> foo = std::make_shared<std::vector<int>> (1,2);

	climbStairs(stairsleft,hops);
}