#include<iostream>
using namespace std;

class ConstOver{
    int a;
    int b;
    string str1;
    string str2;
    char c;
    char r;

    public:
    ConstOver(int a , int b){
        this->a = a;
        this->b = b;
        cout<<"Constructor for int-int value.\n a= "<<a<<" b= "<<b<<endl;
    }

    ConstOver(string str1 , string str2){
        this->str1 = str1;
        this->str2 = str2;
        cout<<"Constructor for string-string value.\n str1= "<<str1<<" str2= "<<str2<<endl;
    }


    ConstOver(char c , char r){
        this->c = c;
        this->r = r;
        cout<<"Constructor for char-char value.\n c= "<<c<<" r= "<<r<<endl;
    }
   
    ~ConstOver(){}
};

int main(){
    ConstOver obj1(10,20),obj2("Ram","Shyam"),obj3('A','B');
}