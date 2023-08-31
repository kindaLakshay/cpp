#include<iostream>
using namespace std;

class emp{
    private: int id;
    public: int age;
    void printinfo();
};
void emp::printinfo(){
    cout<<"the age is: "<<age<<endl;
}
int main() {
    emp lux;
    lux.age = 20;
    lux.printinfo();
    
    return 0;
}