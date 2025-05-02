#include <iostream>
#include <string>
using namespace std;
//student nmanagement system using arrays.......
int main() {
    string name[5];
    string attendance[5];
    char status;
    int choice;
cout << "_________________________________________________________________________\n";    
cout << "STUDENT MANAGEMENT SYSTEM\n";
cout << "_________________________________________________________________________\n";
cout << "1 - ADD STUDENT, 2 - SEE ATTENDANCE LIST\n";
cout << "-------------------------------------------------------------------------\n";
while (true) {
    
cout << "ENTER your choice: ";
cin >> choice;
if (choice == 1) {
    cout << "ADDING STUDENT ATTENDANCE RECORDS\n";
    cout << "-------------------------------------------------------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << "Enter Student name: ";
        cin >> name[i];
        cout << "Is " << name[i] << " present?.y/n ";
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
    cout << "-------------------------------------------------------------------------\n";
    cout << "STUDENTS ATTENANCE LIST\n";
    cout << "-------------------------------------------------------------------------\n";
    for (int i = 0; i < 5; i++) {
        if (name[i].empty()) {
            cout << "No student recorded yet!!!\n";
           break;
        }
        else {
            cout << "NAME: " << name[i] << " is " << attendance[i] << "\n";
            
        }
        
    }
} 
else{
    cout << choice << " Is not valid. enter 1 or 2\n";
}
}

return 0;
}