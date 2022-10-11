//*****Destructors in C++*****//
/*
--Destructors are used to destroy objects so as to release the curreently occupies memory.
--They don't return anything, nor do they take any arguments
--we create destructors by using the name of the class just as in the case of constructors,
    except for using a ~ in ther beginning
--might be called automatically when the use of an object is completed, for example, in sections or blocks of  code 
*/

#include <iostream>
using namespace std;

class num;

class num{
    private:
        int a;
        static int count;
    public:
        num(){
            count++;
            cout<<"CONSTRUCTOR got called for object-------"<<count<<endl;
        }
        ~num(){
            count--;
            cout<<"DESTRUCTOR got called -------"<<endl;
            cout<<"Number of objects left = "<<count<<endl;
        }
        
};

int num:: count;            //I keep forgetting to do this when making static variables 

int main(){

    cout<<"Inside main"<<endl;
    cout<<"Creating a single class object"<<endl;
    num n1;
    {
        cout<<"Entered block"<<endl;
        cout<<"Creating two objects inside block"<<endl;
        num n2,n3;
        cout<<"Exiting block"<<endl;
    }

    return 0;
} 