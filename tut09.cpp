#include <iostream>
using namespace std;

int main(){
    // cout<<"This is tutorial 9 -- Control Structures ";
    //Three basc=ic types of control structures, sequence structures, selection structures, loop structures
    //sequence structure is normal flow of a program, line to line
    //Selection structure selects a command based on a defined condition
    //Selection --> If-else ladder, switch
    //loop will repitetively perform something according to defined conditions


    //If-Else ladder
    // int marks;
    // cout<<"input your marks "<<endl;
    // cin>>marks;
    // if(marks>90){
    //     cout<<"Excellent, you get A+";
    // } 
    // else if(marks>85){
    //     cout<<"Good, you get an A";
    // } 
    // else if(marks>75){
    //     cout<<"Fair enough, you get a B";
    // }
    // else{
    //     cout<<"You got a C, needs improvement";
    // }


    //Switch Case
    char grade;
    cout<<"Enter the grade "<<endl;
    cin>>grade;
    switch (grade)
    {
    case 'A':
        cout<<"Range = 85-90";
    case 'a':
        cout<<"Range = 85-90";
        break;
    case 'B':
        cout<<"Range = 75-85";
    case 'b':
        cout<<"Range = 75-85";
        break;
    case 'C':
        cout<<"Range = <75>";
    case 'c':
        cout<<"Range = <75>";
        break;
    default:
        break;
    }
    //Not using a break statement results in the program evaluating all the expressions from that point until it finds a break 

    
    
    return 0;
}