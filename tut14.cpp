#include <iostream>
using namespace std;
//*****Struct, Unions, and Enums*****//
    //Struct is a collection of different types of data to represent or describe an object with different properties 
    //Union is similar, but in this case, the entire data type has a shared memory and only one property can be accessed at a time 
    //Enums is a function that basicaly allocates numbering to our inputs starting from zero 

typedef struct employee{

        int eID;
        float salary;
        char favChar;
    } em;  //Using typedef above and a name(like em) below, we can directly delare struct objects using this shothand representation 

union money{
    int rupees;
    char crypto;
    float pounds;
};


int main(){

    struct employee pratham;
    em harry;
    harry.eID= 5;
    harry.salary = 1200000;
    harry.favChar = 'h';
    pratham.eID = 38;
    pratham.salary = 8000000;
    pratham.favChar = 'z';
    // cout<<"The value of pratham's eID is "<<pratham.eID<<endl;
    // cout<<"The value of pratham's salary is "<<pratham.salary<<endl;
    // cout<<"The value of pratham's favChar is "<<pratham.favChar<<endl;

    // cout<<"The value of harry's eID is "<<harry.eID<<endl;
    // cout<<"The value of harry's salary is "<<harry.salary<<endl;
    // cout<<"The value of harry's favChar is "<<harry.favChar<<endl;


    // money m1;
    // m1.rupees=9000000;
    // cout<<m1.rupees<<endl;
    // m1.crypto = 'c';
    // cout<<m1.rupees<<endl;;
    // cout<<m1.crypto;

    enum meals{ breakfast, lunch, dinner};  //here, enum plays the role of 'struct', meals plays the role of 'employee', 'm1' plays the role of object declared 
    meals m1 = lunch;
    cout<<m1<<endl;
    cout<<(m1==2);

    for(int i=0; i<5;i){
        cout<<"code running"<<endl;
    }
    

    return 0;  
}