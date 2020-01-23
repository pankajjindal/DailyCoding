#include<iostream>
using namespace std ;
class base 
{
  public: 
    base()  { cout << "base construction" << "\n"; }
    virtual ~base() { cout << "base destruction" <<"\n";  }
};

class derived : public base
{
public :   
  derived ()
    {
      cout << "derived construction"<<"\n";
    name = new char[10];
    cout << "mem allocated for name" << "\n";
  
    }
  ~derived ()
    {
    cout << "derived destruction" << "\n";
    delete [] name;
    cout << "mem de-allocated for name" << "\n";
    }
private: 
  char *name;
};

int main (int argc, char *argv[])
{
  base *b = new derived();
  delete b;
}


