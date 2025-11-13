#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string townName;
    cout << "Enter the name of the town: ";
    getline(cin, townName);

    vector<int> populationData = {2000, 4000, 5000, 9000, 14000, 18000};
    int startYear = 2000; // Assuming the data starts from the year 2000

    cout << "Population Growth Chart for " << townName << endl;

    for (size_t i = 0; i < populationData.size(); ++i) {
        int year = startYear + i;
        int population = populationData[i];
        int numAsterisks = population / 1000;

        cout << year << ": ";
        for (int j = 0; j < numAsterisks; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}