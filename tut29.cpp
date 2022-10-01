//*****Constructors In C++*****//
/*
Constructors are special functions of a class which have the same name as the class.
They are special in the sense that they're automatically invoked whenever a class object is created .
They are used for initializing values generally  but can also be used to perform some specific default operations as needed.
They do not have a return type so they can't return any values, but they can have default arguments. 
Their addresses cannot be referenced.
They need to be declared within the public section/scope.
*/

#include <iostream>
using namespace std;

class complex{
    private :
        int real;
        int imaginary;
        static int count;               //Static variable count to track total number of objects created(also to refresh concept of static variables)
    public:
        complex(void);                  //Constructor created with same name as the class
        void display(void);
};

int complex::count;                     //Static variables need to be declared outside the class as well

complex :: complex(void){               //Defining the default functions to perform whenever an object is created 
    count++;
    real=0;
    imaginary=0;
    cout<<"Complex number has been initialized. Total number of complex numbers made = "<<count<<endl;
}
void complex :: display(void){
    cout<<real<<" + "<<imaginary<<"i"<<endl;
}


int main(){
    
    complex o1,o2,o3;
    o1.display();
    o2.display();
    o3.display();
    
    return 0;
}