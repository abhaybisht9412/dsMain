#include "bits/stdc++.h"
using namespace std;

class accounts {
    private :
    int salary ;

    public :
    void setSalary(int sal)
    {
        salary = sal ;
    }
    void showSalary(){
        cout << salary ;
    }
};

int main () {
    accounts a;
    a.setSalary(5000);
    a.showSalary();
}