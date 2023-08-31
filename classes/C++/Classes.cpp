#include<iostream>
using namespace std;

class student{
    // access specifier
    public:
    // data member
    int rollno;
    string name;
    // member function
    void print()  {cout<<"roll number: "<<rollno <<endl << "name: " <<name;}
};

int main() {
    student lakshay;
    lakshay.rollno = 52;
    lakshay.name = "Lakshay";
    lakshay.print();
    
    return 0;
}