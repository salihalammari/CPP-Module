
#include <iostream>

class A
{

    int x; //
    int *ptr;

public:
    A(int value) : x(value)
    {

        this->ptr = new int(1);
    }
    A(const A &copy)
    {

        // this 
        std::cout << this->ptr << "\n";
        std::cout << copy.ptr<< "\n";
        this->x = copy.x; // deep or shallow copy
        this->ptr = new int(1);
        std::memcpy(this->ptr, copy.ptr, sizeof(int));
        // this->ptr = copy.ptr;
    }

    ~A()
    {
        delete ptr;
    }
};

int main()
{

    A obj1(1);
    A obj2(obj1);
}