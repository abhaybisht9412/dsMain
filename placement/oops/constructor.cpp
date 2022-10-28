#include "iostream"
using namespace std;

class student {
    public : 
    int marks;
    student(int marks) {
        cout << "constructor called \n";
        cout << marks;
    }
};

int main () {
    student s(25);
}