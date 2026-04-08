#include<iostream>
using namespace std;

class Parent{
    public:
    void ShowParent(){
        cout<<"This is Parent class function\n";
    }
};

class Child1:public Parent{
    public:
    void ShowChild1(){
        cout<<"This is Child1 class function\n";
    }
};

class Child2:public Parent{
    public:
    void ShowChild2(){
        cout<<"This is Child2 Class function\n";
    }
};

class Child3:public Parent{
    public:
    void ShowChild3(){
        cout<<"This is Child3 Class function\n";
    }
};

int main(){
    // Create child1 class object
    Child1 c1;
    c1.ShowChild1();
    c1.ShowParent();

    // Create child2 class object
    Child2 c2;
    c2.ShowChild2();
    c2.ShowParent();

    // Create child1 class object
    Child3 c3;
    c3.ShowChild3();
    c3.ShowParent();
}