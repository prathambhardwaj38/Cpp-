//*****Array of objects and passing objects as function arguments*****//

#include <iostream>
#include <iomanip>
using namespace std;

// void showData(void); //tried doing something but it didn't pan out 

class employee{
    private:
        int ID;
        string name;
        int salary;
        // static int count; //tired doing something but it didn't pan out 
    public:
        // int& countRef=count;  //I tried using this refernce variable to set the upper limit in loop
        //since count is a private member and cannot be accessed, but 
        void setData(void);
        void getData(void);
        // static int returnCount(void); // I tried doing something but it didn't pan out 
};

// int employee :: count;
// int& employee :: countRef=count; //I tried doing something but it didn't pan out, nevertheless, the syntax for this line is correct

void employee::setData(void){
    cout<<"Enter the employee ID"<<endl;
    cin>>ID;
    cout<<"Enter the name of the employee"<<endl;
    cin>>name;
    cout<<"Enter the salary of the employee"<<endl;
    cin>>salary;
    // count++; //didn't pan out 
}

void employee::getData(void){
    cout<<setw(10)<<"Employee ID"<<setw(10)<<"Name"<<setw(10)<<"Salary"<<endl;
    cout<<setw(10)<<ID<<setw(10)<<name<<setw(10)<<salary<<endl;
}

// int employee::returnCount(void){
//     return count;  //I tried doing something but it didnt pan out
// }

int main(){

    employee fb[3];
    for(int i=0;i<3;i++){
        fb[i].setData();
    }
    for(int j=0;j<3;j++){
        fb[j].getData();
    }

    return 0;
}

// void showdata(employee fb){
//     cout<<setw(10)<<"Employee ID"<<setw(10)<<"Name"<<setw(10)<<"Salary"<<endl;
//     for(int i=0;i<employee::returnCount();i++){

//         fb.getData();
//     }
    
// }  //I tried doing something/experimenting a bit but it didn't pan out


/*
Basically, I was trying to implement a system using a private static vairable counter, using which 
I wanted to design a function where the values of all the class objecs would be displayed automatically 
using a loop withing common headings/framework.
Since count was a private class var, I couldn't access it in an external function 
to work around this, I made a simple function to return the value of count and used it in the loop
but the new problem that came up was that I can't get the external function to accept an array of class
objects as the argument, it will only accept one object at a time
*/
