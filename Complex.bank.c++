// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

string accountuser[1];
int balance;
int deposit;
int withdrawal;
void depositamount() {
    cout << "DEPOSITING MONEY\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << "Enter amount: ";
    cin >> deposit;
    balance = balance + deposit;
    cout << "You deposited " << deposit << " BALANCE IS ksh: "
    << balance;
}

void withdraw() {
    char choice;
    cout << "WITHDRAWING CASH\n";
    cout << "-------------------------------------------------------------------------\n";
    while (true) {
           cout << "Enter amount: ";
    cin >> withdrawal;
    if(withdrawal <= 0) {
        cout << "Enter valid amount.";
        
    }
    else if (withdrawal > balance) {
        cout << "Error.insufficient balance.";
        
    }
    else if(!withdrawal){
        cout << "you have not entered any amount\n";
        
    }
    else {
        balance = balance - withdrawal;
        cout << "You have withdrawn " << withdrawal << " Your balance is " << balance << "\n";
        cout << "do you wish to withdraw again\n";
        cin >> choice;
        if (choice == 'n') {
            break;
        }
    }
    }
 
}

void checkbalance() {
    string username;
    cout << "CHECKING BALANCE\n";
    cout << "-------------------------------------------------------------------------\n";
    while (true) {
        cout << "Enter the username: ";
    cin >> username;
    if (username == accountuser[0]) {
        cout << "YOUR BALANCE IS: " << balance; 
        break;
    }
    else {
        cout << "username does not match your account name. ";
    }
    }
    
}
int main() {
   int option;  
  cout << "-------------------------------------------------------------------------\n";
   cout << "CENTRAL BANK OF KENYA\n";
  cout << "-------------------------------------------------------------------------\n";
   while (true) {
 
   cout << "\n1 create account\n";
   cout << "2 deposit amount\n";
   cout << "3 withdraw amount\n";
   cout << "4 check balance\n";
   cout << "5 exit\n";
   cout << "-------------------------------------------------------------------------\n";
   cout << "enter your option: ";
   cin >> option;
   
   
    switch (option) {
        
       case 1:
       A:
            cout << "CREATING ACCOUNT\n";
       cout << "-------------------------------------------------------------------------\n";
       
       if (accountuser[0].empty()) {
          for (int i = 0; i < 1; i++) {
           cout << "Enter username: ";
           cin >> accountuser[i];
       }
       cout << "Enter your intial deposit ";
       cin >> balance;
       cout << "Account created for " << accountuser[0] << " with balance of ksh =" << balance << "\n"; 
       }
       else {
           cout << "You already have an account!!!.with username-> " <<  accountuser[0] << "\n" ;
       }
       break;
       case 2:
       if(accountuser[0].empty()) {
           cout << "You dont have an account.create one\n";
          goto A;
       }
       else {
           depositamount();
       }
        break;
        
        case 3:
        if(accountuser[0].empty()) {
           cout << "You dont have an account.create one\n";
          goto A;
       }
       else {
           withdraw();
       }
        break;
        
        case 4:
        if (accountuser[0].empty()) {
            cout << "you dont have an account.create one\n";
            goto A;
        }
        else {
            checkbalance();
        }
        break;
        
        case 5:
       cout << "thanks for using our service\n";
       return 0;
       break;
       
       
       default:
       cout << "Enter valid option.1 to 5";
        break;  
       }
             
       
   }
   
    return 0;
}