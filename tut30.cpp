//*****Parameterized Constructor*****//
/*
Last time, we saw default constructor without any arguments, this time, we'll see paramerterized constructors which takes some argument 
*/

#include <iostream>
#include <cmath>
using namespace std;

class point;
float distBtwPoints(point a, point b);

class point{
    friend float distBtwPoints(point, point);
    private:
        friend float distBtwPoints(point, point);   //This was te initial place of the friend declaration, I moved it above to see if that works, it does, from now on, that will be the default place for my friend declarations 
        int x_cord;
        int y_cord;
    public:
        point(int a=0, int b=0){                    //This is a parameterized constructor which accepts arguments, I also declared some default values for these parameters. 
            x_cord=a;                               //From now on, I'll define constructors within class only and class functions seperately outside of class
            y_cord=b;
        }
        void displayCords(void);
};

// point :: point(int a, int b){                    //I was checking if setting defaut values in the class declaration and defining func seperately would work, it works
//         x_cord=a;
//         y_cord=b;
//     } 

void point:: displayCords(void){                  
    cout<<"( "<<x_cord<<", "<<y_cord<<" )"<<endl;
}

float distBtwPoints(point a,point b){               //This function will be made a friend function of pont class 
    float distance = sqrt( pow( ( a.x_cord - b.x_cord ), 2 ) + pow( ( a.y_cord - b.y_cord ), 2 ) );
    return distance;
}


int main(){

    point A,B(9,9);
    A.displayCords();
    B.displayCords();
    cout<<"The distance between the points is "<<distBtwPoints(A, B)<<" units"<<endl;

    return 0;
}