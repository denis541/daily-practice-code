#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Car {
public:
    string name, brand, problem;

    Car(string n, string b, string p) {
        name = n;
        brand = b;
        problem = p;
    }

    void display() const {  // ✅ FIXED: Added 'const'
        cout << "🚗 Car Name: " << name << endl;
        cout << "🏭 Brand: " << brand << endl;
        cout << "⚠️ Problem: " << problem << endl;
        cout << "---------------------------------\n";
    }
};

// 🔹 Function to save cars to a file
void save(const vector<Car>& cars) {
    ofstream file("cars.txt", ios::app);
    if (!file) {
        cout << "❌ Error: Could not open file for saving!\n";
        return;
    }

    for (const auto& car : cars) {
        file << car.name << "|" << car.brand << "|" << car.problem << "\n";
    }

    file.close();
    cout << "✅ Cars saved successfully!\n";
}

// 🔹 Function to load cars from file
vector<Car> loadFromFile() {
    vector<Car> cars;
    ifstream file("cars.txt");

    if (!file) {
        cout << "❌ Error: Could not open file for loading!\n";
        return cars;
    }

    string name, brand, problem;
    while (getline(file, name, '|') && getline(file, brand, '|') && getline(file, problem)) {
        cars.push_back(Car(name, brand, problem));
    }

    file.close();
    return cars;
}

// 🔹 Function to display all saved cars
void displayCars() {
    vector<Car> cars = loadFromFile();

    if (cars.empty()) {
        cout << "🚫 No cars found in the file.\n";
        return;
    }

    cout << "\n📜 List of Saved Cars:\n";
    cout << "---------------------------------\n";
    for (const Car& car : cars) {
        car.display();  // ✅ Now works because display() is marked as const
    }
}

int main() {
    vector<Car> cars;
    char choice;
    string name, brand, problem;
    int option;

    cout << "🏠 Denison Garage\n";
    cout << "--------------------------------------\n";
    cout << "enter your option 1/2\n";
    cin >> option;
    cin.ignore();

    switch (option)
    {
    case 1:
        
    while (true) {
        cout << "Enter car name: ";
        getline(cin, name);

        cout << "Enter car brand: ";
        getline(cin, brand);

        cout << "Enter car problem: ";
        getline(cin, problem);

        cars.push_back(Car(name, brand, problem));
        cout << "✅ Car added successfully!\n";

        cout << "Add another? (y/n): ";
        cin >> choice;
        cin.ignore();  // Ignore newline character from previous input

        if (choice != 'y') {
            cout << "\n📜 List of Cars Recorded:\n";
            cout << "---------------------------------\n";
            for (const Car& c : cars) {
                c.display();
            }
            break;
        }
    }

    save(cars);
    break;
    case 2:
    displayCars();
    break;
    
    default:
        break;
    }
    return 0;
}
