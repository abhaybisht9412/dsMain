#include "iostream"
using namespace std;
 
class animal {
    public :
    void eat(){
        cout << "eating parent grass" ;
    }
} ;
class cow : public animal{
    public:
    void eat(){
        cout << "cow eating in child grass" ;
    }
} ;

int main (){
    cow c ;
    c.eat();
}