//Define the 2 variables user can input
// Define the different operations that the 2 input values will go through addition, subtraction, division, mulitplcation etc
//Print out results
#include <iostream>
using namespace std;


int main()
{
    int num1;
    int num2;
    int sum;
    int subtract;
    int multiply;
    float divide; //making this a float to allow for decimal point
    int div;
    int mod;

    cout << "Please enter two positive integers, sperated by a space:"<< endl;
    cin >> num1 >> num2;


    sum = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide = static_cast<float>(num1) / (num2);
    div = num1 / num2;
    mod = num1 % num2;

         
    cout << num1 << " + " << num2 << " = " << sum << endl; //prints addition
    cout << num1 << " - " << num2 << " = " << subtract << endl; //prints subtraction
    cout << num1 << " * " << num2 << " = " << multiply << endl; //prints multiplication
    cout << num1 << " / " << num2 << " = " << divide << endl; //prints division as float
    cout << num1 << " div " << num2 << " = " << div << endl; //prints div as int
    cout << num1 << " mod " << num2 << " = " << mod << endl; //prints mod and remainder
    return 0;
}

