#include <iostream>
#include <vector>
#include <fstream>         //in God (jesus i trust)
using namespace std;

class car {
    public:
    string name;
    string brand;
    string issue;

    car(string n, string b, string i) {
        name = n;
        brand = b;
        issue = i;
    }

    void display() const {
        cout << "name " << name << "\n";
        cout << "brand " << brand << "\n";
        cout << "issue " << issue << "\n";
        cout << "-------------------------------------------------------\n";
    }
};

void save(const vector<car>& cars) {
    ofstream file("car.txt", ios::app);
    if (!file) {
        cout << "error. file not opened";
        return;
    }
    string name, brand, issue;
    for (const auto& car : cars) {
        file << car.name << "|" << car.brand << "|" << car.issue << "\n";
    }
    file.close();
}

vector<car> loadfromfile() {
    vector<car> cars;
    ifstream file("car.txt");
    if (!file) {
        cout << "could not open file";
        return cars;
    }
    string name, brand, issue;
    while (getline(file, name, '|') && getline(file, brand, '|') && getline(file, issue)) {
        cars.push_back(car(name, brand, issue));
    }
     file.close();
     return cars;
}

void displaycars() {
    vector<car> cars = loadfromfile();
    if (cars.empty()) {
        cout << "no recorded car";
        return;
    }
    cout << "list of all cars recorded\n";
    cout << "----------------------------------------------------------\n";
    for (const car& car :cars) {
        car.display();
    }
}

int main() {
    vector<car> cars;
    string name;
    string brand;
    string issue;
    int option;
    char choice;
    cout << "----------------------------------------------------------\n";
    cout << "GARAGE MANAGEMENT SYSTEM. 1- add car. 2- see all cars\n";
    cout <<"----------------------------------------------------------\n";
    
    cout << "enter your option\n";
    cin >> option;
    cin.ignore();

    switch (option) {
    
    case 1:
     while (true) {
        cout << "enter name: ";
        getline(cin, name);
        cout << "enter brand: ";
        getline(cin, brand);
        cout << "enter issue: ";
        cin >> issue;
        cars.push_back(car(name, brand, issue));
        cout << "----------------------------------------------------------\n";
        cout << "car added successfully\n";
        cout << "----------------------------------------------------------\n";
        cout << "do you want to add another car.y/n\n";
        cin >> choice;
        cin.ignore();
        if (choice != 'y') {
            cout << "good bye\n";
            for (car c : cars) {
                c.display();
            }
            break;
        }

        }
        save(cars);
     break;
    case 2:
     displaycars();
    break;
    default:
        break;
    }
    return 0;
}