#include "iostream"
using namespace std;

class student {
   public :
    int marks ;
    void callBack();
};

void student :: callBack(){
    cout << "Hello World" ;
}


int main() {
    student s;
    s.marks = 5 ;
    cout << s.marks << "\n" ;
    s.callBack();
}


