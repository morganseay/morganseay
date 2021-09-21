//****************************************
//Name: Morgan Seay
//Course: CS 155 - Computer Science I
//Semester: Fall 2021
//Date Due: 09/20/2021
//Assignment: L8
//Description:Create a program that calculates starbucks total
//*****************************************

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    const double reg = 3.45;
    const double dis = 3.25;
    
    int amountCoffee;
    double pretax, tax, total;
    
    cout << fixed << setprecision(2);
    
    //prompt user for number of mochas
    cout << "How many mochas would you like?" << endl;
    cin >> amountCoffee;
    
    //create discount calculation
    if ( amountCoffee >= 3) {
        pretax = amountCoffee * dis;
                
    }
    
    //calculate total
    pretax = amountCoffee * reg;
    tax = pretax * 0.085;
    total = pretax + tax;
    
    //display total
    cout << "Total price: $" << total << endl;
    
    return 0;
    
    
}
