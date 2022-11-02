#include "iostream"
using namespace std;

class parent {
    public :
    void func(){
        cout << "this is parent class \n";
    }
} ;

class child1 : public parent{
    public :
    void func1(){
        cout << "this is child class1 \n";
    }
};

class child2 : public child1{
    public :
    void func2(){
        cout << "\n this is child class1 \n";
    }
};

int main (){
    child2 c2;
    c2.func();
    c2.func1();
    child1 c1;
    c1.func();
}