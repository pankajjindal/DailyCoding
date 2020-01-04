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
      cout << " my 10" ;
    }
}; 
  
class B : public virtual A { 
  public:
  void show(){
      cout << " my 11" ;
    }
}; 
  
class C : public virtual A { 
  public:
  //void show(){
   //   cout << "12" ;
  //  }
}; 
  
class D : public B, public C { 
  public:
  //void show(){
   //   cout << "13" ;
   // }
}; 
  
int main() 
{ 
    D object; // object creation of class d 
    cout << "a = " << object.a << endl; 
    object.show();
  
  
    //A objectB; // object creation of class d 
    //cout << "a = " << objectB.a << endl; 
   // objectB.show();
  
  // object = &objectB;
  
   //object.show()
    
    return 0; 
} 