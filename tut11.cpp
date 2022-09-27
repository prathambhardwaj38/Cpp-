#include <iostream>
using namespace std;

int main(){

    //*****Break and Continue Statements*****//
    // for(int i=0;i<11;i++){
    //     cout<<i<<endl;
    //     if(i==4){
    //         break; //Program was supposed to print from 0 to 10, but it will now only do 0-4
    //     }
    // }

    for(int i=0;i<11;i++){     
        if(i==4){
            continue; //This was supposed to print from 0 to 10, but willnow skip printing 4
        }
        cout<<i<<endl;
    }


    return 0;
}