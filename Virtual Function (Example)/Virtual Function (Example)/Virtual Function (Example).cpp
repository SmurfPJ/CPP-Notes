#include <iostream>

using std::cout;
using std::cin;

class Base {
public:
    virtual void print() { // Virtual function allows for base class to be overridden from the derived class 
        cout << "Print base class\n";
    }

    void show() {
        cout << "Show base class\n";
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Print derived class\n";
    }

    void show() {
        cout << "Show derived class\n";
    }
};

int main() {

    Base* bptr;
    Derived d;
    bptr = &d;

    bptr->print();
    bptr->show();
}