#include<iostream>
using namespace std;

class Parent1{
    public:
    void ShowParent1(){
        cout<<"This is Parent1 class function\n";
    }
};

class Parent2{
    public:
    void ShowParent2(){
        cout<<"This is Parent2 class function\n";
    }
};

class Child:public Parent1,public Parent2{
    public:
    void ShowChild(){
        cout<<"This is Child Class function\n";
    }
};

int main(){
    // Create child class object
    Child objC;
    objC.ShowChild();
    objC.ShowParent1();
    objC.ShowParent2();
}