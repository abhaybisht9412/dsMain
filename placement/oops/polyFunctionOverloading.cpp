#include "iostream"
using namespace std;
 
class student {
    private:
    int marks;

    public:
    int setMarks(int eng , int maths){
        marks = eng + maths ;
        return marks ;
    }
    int setMarks(int chem){
        marks = chem;
        return marks;
    }
};

int main (){
    student s;
    int avg1 = s.setMarks(90 , 80);
    int avg2 =s.setMarks(75) ;
    cout << avg1 + avg2 ;
}