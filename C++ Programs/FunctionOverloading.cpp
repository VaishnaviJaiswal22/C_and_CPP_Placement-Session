#include<iostream>
using namespace std;

class FuncOver{
    public:
    // Function for float,int , bool, char Value
    float add(float a , float b){
        cout<<"Function for float-float Value.\n";
        return a+b;
    }

    // Fuction for String Value
    string add(string a,string b){
        cout<<"Function for string-string valiue.\n";
        return a+" "+b;
    }

    // Function for string , int , char Value
    void add(string a,int b,char c){
        cout<<"Function for string , int and char value.\n";
        cout<<"String = "<<a<<" , int = "<<b<<" and char = "<<c<<endl;
    }
};

int main(){
    FuncOver f1 , f2 , f3 , f4;
    cout<<"f1.add(10,20) = "<<f1.add(10,20)<<endl;
    cout<<"f2.add(10.5,20.6)= "<<f2.add(10.5,20.6)<<endl;
    cout<<"f3.add(0,1) = "<<f3.add(0,1)<<endl;
    cout<<"f4.add('A','B') = "<<f4.add('A','B')<<endl;

    FuncOver s1;
    cout<<"s1.add('Ram','Sharma') = "<<s1.add("Ram","Sharma")<<endl;

    FuncOver n1;
    n1.add("Ram",10,'B');
}