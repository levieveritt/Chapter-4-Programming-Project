#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // Declare variables
  double weight, distance, cost;

  // Input weight (kg) and distance (miles)
  cout << "Enter the weight of the package (in kg, up to 20kg): ";
  cin >> weight;

  cout << "Enter the shipping distance (in miles, 10-3000 miles): ";
  cin >> distance;

  // Input validation
  if (weight <= 0 || weight > 20) {
    cout << "Invalid weight. Weight must be between 0 and 20 kg." << endl;
    return 1; // Indicate an error
  }

  if (distance < 10 || distance > 3000) {
    cout << "Invalid distance. Distance must be between 10 and 3000 miles." << endl;
    return 1; // Indicate an error
  }

  // Calculate cost based on tiered pricing
  if (weight <= 2) {
    if (distance <= 500) {
      cost = 5.00;
    } else if (distance <= 1000) {
      cost = 8.00;
    } else if (distance <= 2000) {
      cost = 10.00;
    } else {
      cost = 12.00;
    }
  } else if (weight <= 5) {
    if (distance <= 500) {
      cost = 7.00;
    } else if (distance <= 1000) {
      cost = 10.00;
    } else if (distance <= 2000) {
      cost = 12.00;
    } else {
      cost = 15.00;
    }
  } else if (weight <= 10) {
    if (distance <= 500) {
      cost = 9.00;
    } else if (distance <= 1000) {
      cost = 12.00;
    } else if (distance <= 2000) {
      cost = 15.00;
    } else {
      cost = 18.00;
    }
  } else { // weight <= 20
    if (distance <= 500) {
      cost = 11.00;
    } else if (distance <= 1000) {
      cost = 14.00;
    } else if (distance <= 2000) {
      cost = 17.00;
    } else {
      cost = 20.00;
    }
  }

  // Output the cost with formatting
  cout << fixed << setprecision(2); // Ensure 2 decimal places
  cout << "Shipping cost: $" << cost << endl;

  return 0;
}