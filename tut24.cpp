#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//*****Static data members and static methods*****//
/*Static Data Members in C++
When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class. 
if the data members are not static then every object has an individual copy of the data member and it is not shared.
the static members are only initialized once */


/*Static Methods in C++
When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods. 
Static methods can only be accessed using the scope resolution operator. --->  employee :: staticMethod;  */

class employee{
    private:
        int eID;
        string name;
        static int count;
    public:
        void setData(void);
        void getData(void);
        static void getCount(void);  //count is the static data member/variable  and getCount is the static method;

};

void employee :: setData(void){
    cout<<"Enter employee ID"<<endl;
    cin>>eID;
    cout<<"Enter employee name "<<endl;
    cin>>name;
    count++;
}

void employee :: getData(void){
    cout<<setw(10)<<"Employee ID"<<setw(10)<<"Name"<<endl;
    cout<<setw(10)<<eID<<setw(10)<<name<<endl;
}

void employee :: getCount(void){
    cout<<"The total number of employees is : "<<count<<endl;
}

int employee :: count ;  //for static deta members, we have to declare the variable like this outside of class as well 

int main(){

    employee pratham;
    pratham.setData();
    pratham.getData();
    employee :: getCount();  //This is how we call a static method, we don't need a class object, but we have to use the scope resolution operator to make it happen 
    employee abhishek;
    abhishek.setData();
    abhishek.getData();
    employee :: getCount(); //When running the code, we'll be able to see that the static variable is shared between both the objects and is initialized only once with the default value of 0


    return 0;
}
