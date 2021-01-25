/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 5, 2021, 12:10 PM
 * Purpose: HW assignment 1, Gaddis Ch2 problem 20 
 */

//System Libraries
#include <iostream> //I/O/Library

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal Constants, High Dimensional Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    
    //Declare Variables
    unsigned short  height, //height of fence in ft
                    length, //length of fence in ft
                    pntcov, //paint coverage per can in ft^2
                    SA,     //surface area of fence to paint in ft^2
                    numgal; //number of gallons of paint
    
    //Initialize Variables
    height=6;
    length=100;
    pntcov=340;
    
    //map inputs to outputs -> process
    SA=2*2*height*length; //paint two coats front and back of fence
    numgal= SA/pntcov+1;
    
    //display inputs/outputs
    cout<<" number of gallons required= " <<numgal<< " to paint a ";
    cout<<height<<" x " <<length<<" ft^2 fence front and back twice " <<endl;
    
    //exit program-cleanup
    return 0;
}

