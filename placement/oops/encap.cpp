#include<iostream>
using namespace std;

class employee {
    
    int salary;

    public:

    void setSalary(int sal){23wq
        salary = sal; 
    }
    int sendSalary(){
        return salary;
    }
};

int main (){
    employee e;
    e.setSalary(2500000);
    int realSal = e.sendSalary();
    cout << realSal ;
}
