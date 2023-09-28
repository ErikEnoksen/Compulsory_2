#include <iostream>

using namespace std;

//This is doing Factorial using Reccursion
long factorial(int n) {                                                                    

        if (n <= 1)
        return n * factorial(n - 1);

        else
        return 1;
}
void dofactorial() {
    cout << "Enter a positive integer\n";
    int num;
    cin >> num;

    if (cin.fail() || num < 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        cin.clear();
        cin.ignore();
        return;
    }

    cin.ignore(); 

    cout << num << "! = " << factorial(num) << '\n';
}

void printPolynomial(double* poly, int degree){

    for (int i = degree; i >=0; i--){
        if (poly[i] !=0.0) {
            if (i != degree){
             if (poly[i] > 0.0) 
             cout << " + ";
             else 
             cout <<  " - ";
            }
            if (i != 0) 
            cout << poly[i] << "x^" << i;
            else 
            cout << poly[i];
         }         
    }
    cout <<endl;
}

//additon of Polynomials
void addPolynomials(double* poly1, double* poly2, int degree){
    for (int i = 0; i <= degree; i++){
        poly1[i] += poly2[i];
    }
}

//Subtraction of polynomials
void subtractPolynomials(double* poly1, double* poly2,int degree){
    for (int i = 0; i <= degree; i++){
        poly1[i] -= poly2[i];
    }
}

//Multipliying Polynomials
void multiplyPolynomials(double* poly1, double* poly2, int degree){                     
    double result[2* 3 +1] = {0.0};

    for (int i = 0; i <= degree; i++){
        for (int j = 0; j <= degree; j++){
            result[i + j] += poly1[i] * poly2[j];
        }
    }

    for (int i = 0; i <= 2 * degree; i++){
        poly1[i] = result[i];
    }
}

//This is the menu for the Polynomial Equations Part
void polynomMenu(){
    cout<< "\n      MENU    \n";
    cout<< "1. Additon\n";
    cout<< "2. Subtraction\n";
    cout<< "3. Multiplication\n";
    cout<<"Enter ur choice: ";

    int degree; 
    cout << "Enter the degree of the polynomials: ";
    cin >> degree;
   
    int choice;
    cin>> choice;
    if(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            polynomMenu();
    }

   double poly1[degree + 1];
   double poly2[degree + 1];

    cout <<"Enter coefficients of the first polynomial (from highest degree to constant term): ";
        for (int i = degree; i >= 0; i-- ){
            cin>> poly1[i];
        }
    cout <<"Enter cofficients of the second polynomial (from highest degree to constant term)";
        for (int i = degree; i >= 0; i--){
            cin >> poly2[i];
        }
    switch(choice){
      
      while(true){
        
        case 1:
            addPolynomials(poly1, poly2, degree);
            cout <<"Result of additon: ";
            printPolynomial(poly1, degree);
            break;
        case 2:
            subtractPolynomials(poly1, poly2, degree);
            cout <<"Result of subtraction: ";
            printPolynomial(poly1, degree);
            break;
        case 3:
            multiplyPolynomials(poly1, poly2, degree);
            cout <<"Result of multiplication: ";
            printPolynomial(poly1, 2 * degree);
            break;
        default:
        cout <<"No sorry that wasnt one of your options try again!\n"; 
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
      }
    }
}

//This is the code for doing simpleMath
    void simplemath(){
        char op;
        float num1, num2;

    cout <<"Enter operator: +, -, *, /: ";    
    cin>> op;

    cout <<"Enter two operands";
    cin >>num1 >>num2;

    switch(op)  {
        
    while(true){
        case '+':
            cout <<num1 << "+" << num2 << "=" << num1 + num2;
        break;
        
        case '-':
            cout <<num1 << "-" <<num2 << "=" << num1 - num2;
        break;

        case '*':
            cout <<num1 << "*" <<num2 << "=" <<num1 * num2;
        break;

        case '/':
            cout <<num1 << "/" <<num2 << "=" <<num1 / num2;
        break;

        default:
            cout <<"This dosent work";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
} 
} 

//This my main menu for the Calculator
int main(){                                                     
    
     while (true){
        cout <<"Enjoy this majestic Calculator menu\n";
        cout <<"1. Factorial\n";
        cout <<"2. Solve Polynom Equaction\n";
        cout <<"3. Simple Math\n";
        cout <<"4. Quit\n";
        int option;
        cin >> option;
    switch (option){
    
    case 1:
        dofactorial();

        continue;
    break;
    
    case 2:   
        polynomMenu();
        
        continue;
    break;
    case 3:  
        simplemath();

        continue;
    break;

    case 4:     //End Program
    return 0;
    break;

    default:
        cout <<"No sorry that wasnt one of your options try again!\n";       
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    continue;
    }
}
}
