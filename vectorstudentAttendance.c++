#include <iostream>
#include <vector>
using namespace std;
class student {
    public:
    string name;
    string attendance;
    student(string n, string a) {
        name = n;
        attendance = a;
    }
    
    void display() {
        cout << "NAME " << name << " is " << attendance << "\n";
    }
};
int main() {
    vector<student> students;
      string name;
    string attendance;
    char status;
    char option;
  cout << "attendance list\n";
  cout << "-------------------------------------\n";
  while (true) {
      cout << "enter student name ";
      cin >> name;
      cout << "is " << name << " present? y/n: ";
      cin >> status;
      if (status == 'y') {
          attendance = "present";
      }
      else{
         attendance = "absent"; 
      }
      students.push_back(student(name, attendance));
      cout << "add another student.y/n: ";
      cin >> option;
      if (option != 'y') {
          for (student x : students) {
              x.display();
          }
      }
  }
    return 0;
}