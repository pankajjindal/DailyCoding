#include <iostream>

using namespace std;

class IAnimal
{
public:
    virtual int GetNumberOfLegs() const = 0;
    virtual void Speak() = 0;
    virtual void Free() = 0;
}; 

// IAnimal implementations
class Cat : public IAnimal
{
public:
    int GetNumberOfLegs() const { return 4; }
    void Speak() { cout << "Meow" << endl; }
    void Free() { delete this; }

    static IAnimal * __stdcall Create() { return new Cat(); }
};

class Dog : public IAnimal
{
public:
    int GetNumberOfLegs() const { return 4; }
    void Speak() { cout << "Woof" << endl; }
    void Free() { delete this; }

    static IAnimal * __stdcall Create() { return new Dog(); }
};

class Spider : public IAnimal // Yeah it isn’t really an animal…
{
public:
    int GetNumberOfLegs() const { return 8; }
    void Speak() { cout << endl; }
    void Free() { delete this; }

    static IAnimal * __stdcall Create() { return new Spider(); }
};

class Horse : public IAnimal
{
public:
    int GetNumberOfLegs() const { return 4; }
    void Speak() { cout << "A horse is a horse, of course, of course." << endl; }
    void Free() { delete this; }

    static IAnimal * __stdcall Create() { return new Horse(); }
};

// Factory for creating instances of IAnimal
class AnimalFactory
{
private:
    AnimalFactory();
    AnimalFactory(const AnimalFactory &) { }
    AnimalFactory &operator=(const AnimalFactory &) { return *this; }

    typedef map FactoryMap;
    FactoryMap m_FactoryMap;
public:
    ~AnimalFactory() { m_FactoryMap.clear(); }

    static AnimalFactory *Get()
    {
        static AnimalFactory instance;
        return &instance;
    }

    void Register(const string &animalName, CreateAnimalFn pfnCreate);
    IAnimal *CreateAnimal(const string &animalName);
};

/* Animal factory constructor.
Register the types of animals here.
*/
AnimalFactory::AnimalFactory()
{
    Register("Horse", &Horse::Create);
    Register("Cat", &Cat::Create);
    Register("Dog", &Dog::Create);
    Register("Spider", &Spider::Create);
}

void AnimalFactory::Register(const string &animalName, CreateAnimalFn pfnCreate)
{
    m_FactoryMap[animalName] = pfnCreate;
}

IAnimal *AnimalFactory::CreateAnimal(const string &animalName)
{
    FactoryMap::iterator it = m_FactoryMap.find(animalName);
    if( it != m_FactoryMap.end() )
    return it->second();
    return NULL;
}

int main( int argc, char **argv )
{
    IAnimal *pAnimal = NULL;
    string animalName;

    while( pAnimal == NULL )
    {
        cout << "Type the name of an animal or ‘q’ to quit: ";
        cin >> animalName;

        if( animalName == "q" )
        break;

        IAnimal *pAnimal = AnimalFactory::Get()->CreateAnimal(animalName);
        if( pAnimal )
        {
            cout << "Your animal has " << pAnimal->GetNumberOfLegs() << " legs." << endl;
            cout << "Your animal says: ";
            pAnimal->Speak();
        }
        else
        {
            cout << "That animal doesn’t exist in the farm! Choose another!" << endl;
        }
        if( pAnimal )
            pAnimal->Free();
        pAnimal = NULL;
        animalName.clear();
    }
    return 0;
}
