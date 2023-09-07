#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1("12345");    
    string s2("abcde");    
    cout<<s1<<" "<<s2<<endl;

    s1.insert(4, s2);
    cout<<s1<<endl;
    s1.insert(4,s2,1,1);


    s1.append("hehehe");
    cout<<"after append "<<s1<<endl;
    
    return 0;
}