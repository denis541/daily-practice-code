#include <iostream>
#include <vector>  // For storing multiple people
using namespace std;

// Define the Person class
class Person {
public:
    string name;
    int age;
    string email;

    // Constructor to initialize person details
    Person(string n, int a, string e) {
        name = n;
        age = a;
        email = e;
    }

    // Function to display the person's details
    void display() {
        cout << "👤 Name: " << name << "\n";
        cout << "🎂 Age: " << age << "\n";
        cout << "📧 Email: " << email << "\n";
        cout << "---------------------------\n";
    }
};

int main() {
    vector<Person> people; // Store multiple people
    char choice;

    while (true) {
        string name, email;
        int age;

        cout << "Enter Name: ";
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, name); 

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Email: ";
        cin >> email;

        // Create a Person object and store it in the list
        people.push_back(Person(name, age, email));

        // Ask user if they want to add another person
        cout << "Do you want to add another person? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    // Display all recorded people
    cout << "\n📜 List of People Recorded:\n";
    for (Person p : people) {
        p.display();
    }

    return 0;
}
