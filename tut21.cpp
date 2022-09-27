#include <iostream>
using namespace std;

//*****Classes,Public and Private access modifiers*****//

class student{
    private:
        int roll, standard;
        char divison;
        string name;
    public:
        int grade, marks1, marks2, marks3;
        string subject1, subject2, subject3;

        void setData(int roll, int standard, char division, string name);
        void getData(){
            cout<<"Name of the student is : "<<name<<endl;
            cout<<"The student is in class : "<<standard<<endl;
            cout<<"The student is in section : "<<divison<<endl;
            cout<<"Roll of student is  : "<<roll<<endl;
            cout<<"The subjects of the student are : "<<subject1<<", "<<subject2<<" and "<<subject3<<endl;
            cout<<"The marks of the student are : "<<marks1<<", "<<marks2<<" and "<<marks3<<endl;
            cout<<"The final grade of the student is "<<grade<<endl;
        }
};

void student :: setData(int roll, int standard, char division, string name){
    student::roll=roll;
    student::standard=standard;
    student::divison=division;
    student::name=name;
}


int main(){

    student Pratham;
    Pratham.setData(128,4,'A',"Pratham");
    Pratham.subject1="Maths";
    Pratham.subject2="Science";
    Pratham.subject3="Social Studies";
    Pratham.marks1=90;
    Pratham.marks2=90;
    Pratham.marks3=90;
    Pratham.grade='A';
    Pratham.getData();

    return 0;
}