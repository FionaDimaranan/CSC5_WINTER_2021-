/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 5, 2021, 1:50 PM
 * Purpose: Gaddis Ch2 Problem 1 "Sum of Two Numbers"
 * Write a program that stores the integers 50 and 100 in variables and
 stores the sum of these two in a variable named total.
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
    short var1,var2,total ;
   
    //Initialize Variables
    var1= 50;  //variable 1, integer 50
    var2= 100;  //variable 2, integer 100
    
            
    //map inputs to outputs -> process
    total=var1+var2;    //sum of variables 1 and 2
    
    //display inputs/outputs
    cout<<"total = var1 + var2\n";
    cout<<total<< " = " <<var1<< " + " <<var2<<endl;
    
    //exit program-cleanup
         
    return 0;
}

