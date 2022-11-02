#include "iostream"
using namespace std;

class parent {
    public :
    void func(){
        cout << "this is parent class \n";
    }
} ;

class child1 {
    public :
    void func(){
        cout << "this is child class1 \n";
    }
};

class child2 : public parent , public child1{
    public :
    void func2(){
        cout << "this is child class1 \n";
    }
};

int main (){
   child2 c2;
   c2.parent :: func();

}