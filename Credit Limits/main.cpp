//
//  main.cpp
//  Credit Limits
//
//  Created by Amanpreeet Sandhu on 2024-11-17.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Intialize variables
    unsigned int accountNumber;
   
    // Prompt the user to enter the facts
    cout << "Enter account number(or -1 to quit): " ;
    cin >> accountNumber;
    
    // Use while statement for receiving user input until he inputs -1
    while (accountNumber != -1) {
        
        double beginningBalance{0};
        double totalCharges{0};
        double totalCredits{0};
        double creditLimit{0};
        
        cout << "Enter beginning balance: ";
        cin >> beginningBalance;
        cout << "Enter total charges: " ;
        cin >> totalCharges;
        cout << "Enter total credits: ";
        cin >> totalCredits;
        cout << "Enter credit limit: ";
        cin >> creditLimit;
        
        
        // Calculate the new balance
        double newBalance;
        newBalance = beginningBalance + totalCharges - totalCredits;
        
        // Output Results
        cout << "New Balance is " << newBalance << endl ;
        
        if(newBalance > creditLimit){
            cout << "Account:   " << accountNumber << endl;
            cout << "Credit limit: " << creditLimit << endl;
            cout << "Balance: " << newBalance << endl;
            cout << "Credit Limit Exceeded." << endl << endl;
        }
        
        // Prompt the user to enter the next account info
        cout << "Enter account number(or -1 to quit): " ;
        cin >> accountNumber;
    }
}
