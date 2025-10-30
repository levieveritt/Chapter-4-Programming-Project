#include <iostream>
#include <cmath>
#include <limits> // Required for numeric_limits

using namespace std;

// Function prototypes
double calculateCircleArea(double radius);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

int main() {
    int choice;
    double radius, length, width, base, height;

    do {
        cout << "\nGeometric Area Calculator\n";
        cout << "1. Calculate Circle Area\n";
        cout << "2. Calculate Rectangle Area\n";
        cout << "3. Calculate Triangle Area\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Input validation: Check if the input stream is in a good state
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Restart the loop
        }

        switch (choice) {
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                // Input validation: Check for non-positive radius
                if (radius <= 0) {
                    cout << "Radius must be a positive number.\n";
                    break;
                }

                cout << "Area of the circle: " << calculateCircleArea(radius) << endl;
                break;
            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;

                // Input validation: Check for non-positive dimensions
                if (length <= 0 || width <= 0) {
                    cout << "Length and width must be positive numbers.\n";
                    break;
                }

                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            case 3:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;

                // Input validation: Check for non-positive dimensions
                if (base <= 0 || height <= 0) {
                    cout << "Base and height must be positive numbers.\n";
                    break;
                }

                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 0 and 3.\n";
        }
    } while (choice != 0);

    return 0;
}

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}