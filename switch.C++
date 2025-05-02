/*#include <iostream>
using namespace std;

int main() {
                    int choice;

                   
                    cin >> choice;
                    
                    switch (choice) {
                        case 1: 
                        cout << "you chose chapati ";
                        break;

                        case 2:
                        cout << "you chose coffee ";
                        break;

                        case 3:
                        cout << "you chose tea ";
                        break;
                        default:
                        cout << "invalid choice ";
                    }
                    
    return 0;
}*/

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class employee {
    public:
    string name;
    string email;
    string department;

    employee(string n, string e, department d) {
        name = n;
        email = e;
        department = d;
    }
       
    void display() {
        cout << "NAME " << name << "\n";
        cout << "EMAIL " << email << "\n";
        cout << "DEPARTMENT " << department << "\n";
    }
};
int main() {
    cout << "----------------------------------------------------------------\n";
    cout << "EMPLOYEE MANAGEMENT SYSTEM\n";
    cout << "----------------------------------------------------------------\n";
    
    return 0;
}