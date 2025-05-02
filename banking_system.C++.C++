#include <iostream>
using namespace std;

int main() {
    cout << "WELCOME TO OUR KCB BANK\n";
    int option;
    int balance;
    balance = 1000;
    

    cout << "enter option\n";
    cout << "1-check balance\n 2-withdraw\n 3-deposit\n";
    cin >> option;
    if (option == 1) {
      cout << "YOUR BALANCE IS " << balance << endl;
    }
    else if (option == 2) {
        int withdrawal;
        cout << "enter your withdrawal";
        cin >> withdrawal;
        if (withdrawal > balance) {
            cout << "the balance is less than whan your withdrawal\n";
            cout << "you balance is" << balance;
        } 
        else {
            balance = balance -withdrawal;
            cout << "you withdrawed" << withdrawal << endl;
            cout << "you balance is" << balance;
        }
        
    }
    else if (option == 3) {
        int deposit;
        cout << "enter amount you want to deposit\n";
        cin>> deposit;
         balance = balance + deposit;
         cout << "your balance is " << balance;
    }
    else {
        cout << "enter the correct option 1 2 or 3";
        return 0;
    }
       

    
}