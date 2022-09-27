#include <iostream>
using namespace std;

int main(){

    //*****Pointers*****
    //Pointers are simply data types that store addresses of other data and point to the mby referencing these addresses
    int a=38;
    int* b= &a;
    //& ---> is a (address of) operaator and returns the phycial address of that data in memory
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Showing address of a through pointer b "<<b<<endl;

    //* ---> is called Deferencing operator, it works as (Value_at) operator and resolves the value that is stored at the referenced address
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of a through pointer is "<<*b<<endl;

    // Double pointers store the addresses of other pointers and point towards them
    int** c=&b;
    cout<<"The address of pointer b is "<<&b<<endl; 
    cout<<"Showing address of b through double pointer c "<<c<<endl;
    cout<<"Value(address of a) of b is "<<b<<endl;
    cout<<"Value(address of a) of b through double pointer is "<<*c<<endl;
    cout<<"Referencing twice to show the value that's stored at the address in b "<<**c<<endl;

    return 0;
}