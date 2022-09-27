#include <iostream>
using namespace std;

int main(){

    //*****Arrays and array pointers*****//
    //Arrays are just collection of similar type of data/objects stored in contiguous memory location
    int marks[]= {22,23,25,24,27};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    //We can use loops to print the values inside an array 

    // for(int i=0;i<5;i++){
    //     cout<<"Marks at index "<<i<<" is "<<marks[i]<<endl;
    // }

    // int i = 0;
    // // while(i<5){

    // //     cout<<"Marks at index "<<i<<" is "<<marks[i]<<endl;
    // //     i++;
    // // };

    // do{

    //     cout<<"Marks at index "<<i<<" is "<<marks[i]<<endl;
    //     i++;        
    // }while(i<5);

    //We can also use pointers to access array elements 
    //But in case of array pointers, we don't have to use & operators to store addresses 
    //The first block of an array represents the address of that array 
    int* p= marks;
    cout<<*p<<endl;

    //Pointer Arithmetic 
    //By incrementing the value of the pointer itself, we can access the subsequent elements of the array 

    cout<<*(p+1)<<endl;
    cout<<*(p++)<<endl; // Here, the value at pointer will be printed first and then the incement happens 
    cout<<(*p)<<endl; //Here, the value has already been incremented in the last statement, so we see the next element in line 



    return 0;
}