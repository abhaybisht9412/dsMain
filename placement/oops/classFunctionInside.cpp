#include "iostream"
using namespace std;

class student{
    public :
    int stud_id ;
    
    void showID(int stud_id){
        cout << stud_id ;
    }
};

int main (){
    student s;
    s.stud_id = 1;
    s.showID(s.stud_id);

}


