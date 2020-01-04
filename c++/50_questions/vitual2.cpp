#include <iostream> 
using namespace std; 
  
class A { 
public: 
    int a; 
    A() // constructor 
    { 
        a = 10; 
    } 
    void show(){
      cout << "10" ;
    }
}; 
  
class B : public virtual A { 
  public:
  void show(){
      cout << "11" ;
    }
}; 
  
class C : public virtual A { 
  public:
  void show(){
      cout << "12" ;
    }
}; 
  
class D : public B, public C { 
  public:
  void show(){
      cout << "13" ;
    }
}; 
  
int main() 
{ 
    D object; // object creation of class d 
    cout << "a = " << object.a << endl; 
    object.show();
  
    B objectB; // object creation of class d 
    cout << "a = " << objectB.a << endl; 
    objectB.show();
  
    return 0; 
} 
