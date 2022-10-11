//*****Copy constructors*****//
/*
A copy constructor is a type of contructor that creates a copy of another object. If we want one object to resemble another object,
we use a copy constructor.
If no copy constructor is defined by the user, compiler provides a default copy constructor for every class
Copy onstructors are invoked only when objects are defined/declared/made in a single line only 
copy constructors are defined as taking a reference variable of the class object type as an argument 
*/


#include <iostream>
using namespace std;

class number{
    private:
        int a;
    public:
        number(void){
            a=0;
        }
        number(int num){
            a=num;
        }
        number (number &obj){       //defined a copy constructor
            cout<<"Copy constructor is called --------"<<endl;
            a = obj.a;
        }
        void display(void);

};
void number:: display(void){
            cout<<"The number for this object is "<<a<<endl;
        }

int main(){

    number obj1,obj2,obj3(45);
    obj2=obj3;      //Copy constructor not called since only assignment is happening here, the object itself has already been created previously 
    number obj4=obj2; //copy constructor called since object is created in the same line only 
    number obj5(obj1); //copy constructor is called since object created in a single line only 
    return 0;
}