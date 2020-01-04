#include <iostream>

using namespace std;

class enemy 
{
public:
virtual void attack() =0;

void attack2()
{
	cout << "my enemy";
}
	
};

class monster :public enemy 
{
public:
void attack()
{
cout << "monster";
}
	
};

class ninja: public enemy
{
public :
void attack()
{
cout << "ninja" ;
}

void ninjaAttack()
{
	cout << "ninja ninjaAttack";
}
	
};

int main ()
{
	ninja n;
	monster m;
	enemy *e1 = &n;
	enemy *e2 = &m;

	e1->attack();
	e2->attack();
	//e1->ninjaAttack(); // this will not work as the e1 enemy cannot see any other function of ninja

}