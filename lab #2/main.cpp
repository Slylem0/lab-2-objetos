#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>

using namespace std;

void show_menu() {
    cout << "\nMenu:\n";
    cout << "1. Add Circle\n";
    cout << "2. Add Rectangle\n";
    cout << "3. Show Inventory\n";
    cout << "4. Add Areas of Two Shapes\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    vector<Shape*> inventory;
    int option;

    do {
        show_menu();
        cin >> option;

        switch (option) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            inventory.push_back(new Circle(radius));
            break;
        }
        case 2: {
            double width, height;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "Enter the height of the rectangle: ";
            cin >> height;
            inventory.push_back(new Rectangle(width, height));
            break;
        }
        case 3: {
            for (size_t i = 0; i < inventory.size(); ++i) {
                cout << "Shape " << i + 1 << ": ";
                inventory[i]->display_parameters();
            }
            break;
        }
        case 4: {
            if (inventory.size() < 2) {
                cout << "Not enough shapes to add areas.\n";
                break;
            }
            int index1, index2;
            cout << "Enter the index of the first shape: ";
            cin >> index1;
            cout << "Enter the index of the second shape: ";
            cin >> index2;
            if (index1 > 0 && index1 <= inventory.size() &&
                index2 > 0 && index2 <= inventory.size()) {
                double total_area = inventory[index1 - 1]->area() + inventory[index2 - 1]->area();
                cout << "The total area is: " << total_area << endl;
            } else {
                cout << "Invalid indices.\n";
            }
            break;
        }
        case 5:
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid option.\n";
        }
    } while (option != 5);

    // Free memory
    for (Shape* shape : inventory) {
        delete shape;
    }

    return 0;
}
