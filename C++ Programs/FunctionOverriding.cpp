#include<iostream>
using namespace std;
// abstract class
class Base{
    public:
    // Virtual Function
    virtual void show(){
        cout<<"this is Base Class Function."<<endl;
    }

    // pure Virtual function
    virtual void test()=0;

};

class Derived:public Base{
    public:
    void show(){
        cout<<"this is Derived class Function."<<endl;
    }
    // Re-Declaration of pure virtual function to make this class non-abstract
    void test(){
        cout<<"Derived Class: this is overridden pure virtual function."<<endl;
    }
};

int main(){
    Derived objD;
    objD.show();

    // Base class pointer
    Base* bptr;
    bptr = &objD;
    bptr->show();
    bptr->test();
}