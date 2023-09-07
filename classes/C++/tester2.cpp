// this pointer holds address of current object,
// each object of class has the access to its own address
// which is possible with this pointer, 
// this pointer is implicitly availible
// to all the member function of the class

#include<iostream>
using namespace std;
int main()
{
	int x = 4;
	float y = 5.5;
	//A void pointer
	void *ptr;
	ptr = &x;
	cout<<"Integer variable is = "<<( *(int*) ptr) ;
	// void pointer is now float
	ptr = &y;
	cout<<"\nFloat variable is= "<< ( *(float*) ptr) ;
	return 0;
}