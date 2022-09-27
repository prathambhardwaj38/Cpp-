#include <iostream>
using namespace std ;

int c = 45;

int main(){
    //*****Data Types and their scope*****
    // int a,b,c;
    // cout<<"Enter the value of a ";
    // cin>>a;
    // cout<<"Enter the value of b ";
    // cin>>b;
    // c=a+b;
    // cout<<"The sum of a and b is stored in local variable c, which is "<<c<<endl;
    // cout<<"This is the global variable c with the value of "<<::c;

    // float d=38.5f;
    // long double e= 38.5l; //adding f or l after a decimal number specifies it's type, here these are not needed because we already specified the data type, but useful when passing only numbers 
    // cout<<"The size of float is "<<sizeof(38.5f)<<endl;
    // cout<<"The size of double is "<<sizeof(38.5)<<endl;
    // cout<<"The size of long double is "<<sizeof(38.5l)<<endl;

    //*****Reference Variables*****
    //It's nothing but linking one variable to a previously defined one so that they both refer to the same value, sort of like different nicknames that we might use to call a person 
    // int z=38;
    // int & y=z;
    // cout<<"The number z is "<<z<<endl;
    // cout<<"The number y is "<<y<<endl;
    
    //*****TypeCasting of Variables*****
    //Typecasting is nothing but converting the data types of variables
    float a = 38.5;
    double b = 44.55;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"I'm converting floating value of a to an integer, and displaying it, so it becomes "<<int(a)<<endl;
    cout<<"This time, I'm converting double value of b, so it also becomes "<<int(b)<<endl;


    return 0;
}