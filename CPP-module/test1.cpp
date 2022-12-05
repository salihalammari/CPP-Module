#include <iostream>

class Base
{
protected:
    int _x;

private:
    int _y;

public:
    int _z;
    Base(int x, int y, int z) : _x(x), _y(y), _z(z){};
   virtual  void print()
    {
        std::cout << "base\n"; 
    }
   virtual ~Base()
    {
        std::cout << "destructor base\n"; 
    }
};

#include <iostream>
class Derived : public Base
{

public:
    Derived() : Base(1, 2, 3)
    {
        std::cout << this->_z << this->_x << std::endl;
    }
    void print()
    {
        std::cout << "drived\n"; 
    }
    ~Derived()
    {
        std::cout << "destructor derived\n"; 
    }
};

int main()
{
    Base* btr = new Derived();

    // btr->print();
    delete btr;

    // obj.
}