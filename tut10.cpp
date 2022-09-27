#include <iostream>
using namespace std;

int main(){
//*****LOOPS*****
/* 3 Types  of loops :
1. For
2.While
3.Do-while*/

//For Loops
//Syntax:
/* 
for(initialization;condition;updation){
    loop body(C++ code);
}
*/
// for (int i=1;i<11;i++){
//     cout<<"6 * "<<i<<" = "<<6*i<<endl;
// }

//While Loops
//Syntax:
/*
while(condition){
    Loop body(C++ code);
    counter;
};
*/
int i=1;
while(i<11){
   cout<<"6 * "<<i<<" = "<<6*i<<endl; 
   //i++;
};


    return 0;
}