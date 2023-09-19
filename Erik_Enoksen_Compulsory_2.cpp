#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {                                                                    //Here i am making a function to calculate factorial using reccursion :D         
                                                                                            //(note myself: Its part og my task)
        if (n <= 1)
    return 1;

        else
        return n * factorial(n - 1);
    
}


    void losPolynomEquaction(double a, double b, double c) {                            //Making option 2 for Polynomial Equactions
                                                                                        //Note: Kanskje bruk en Header for denne delen eller bare gjør det for simple math

    }

//void? or int?
int main(){                                                     //Here im making a menu for this Calcualtor "jippi"
    
     
        std::cout <<"Enjoy this majestic Calculator manu./n";
        std::cout <<"1. Factorial./n";
        std::cout <<"2. Solve Polynom Equaction./n";
        std::cout <<"3. Simple Math./n";
        std::cout <<"4. Quit./n";
        int option;
        std::cin >> option;
    switch (option){
    
    case 1:     //Factorial
        int num;
        std::cout<<"Enter a non-negative integer./n";
        
    break;
    
    case 2:     //Solve Polynom Equation   
        std::cout<<"Solve";
    break;

    case 3:     //Simple Math
    
    break;

    case 4:     //End Program

    break;
    
    default:    //its a Failsafe for the user input
    std:cout<<"Error! What you are writing dont make sense or not correct";
    
    }
}
