#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "-------------------------------------------------\n";
    cout << "STUDENT ATTENDANCE TRACKING SYSTEM\n";
    cout << "-------------------------------------------------\n";
    string names[5];
    char status;
    string attendance[5];
    int choice;
    
    cout << "1 record students, 2 see the attendance list\n";
    cout << "-------------------------------------------------\n";

    
    
    while (true) {
        cout << "enter your choice: ";
        cin >> choice;
        if (choice == 1) {
          for(int i = 0; i < 5; i++) {
          cout << "Enter students name: ";
          cin >> names[i];
          cout << "is " << names[i] << " present.y/n ";
          cin >> status;
          if (status == 'y') {
              attendance[i] = "present";
          }
          else {
              attendance[i] = "absent";
          }
         }
        }
        else if (choice == 2) {
            cout << "attendance list\n";
            cout << "-----------------------------------------\n";
            for (int i = 0; i < 5; i++) {
                cout << "NAME: " << names[i] << " " << attendance[i] << endl;
            }
        }
       
    
    }
    return 0;
}