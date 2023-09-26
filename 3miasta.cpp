#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//alfabetyczne sortowanie 8 miast
//alokowanie dynamiczne
//zwolnienie pamięci


//porównanie dwóch nazw miast
bool compareCities(const string& city1, const string& city2) {
    string city1Copy = city1;
    string city2Copy = city2;

    return city1Copy < city2Copy;
}

int main() {
    const int maxCities = 8;
    string cities[maxCities];
    int numCities = 0;

    cout << "Enter up to 8 city names (Enter to finish):\n";

    while (numCities < maxCities) {
        string city;
        getline(cin, city);

        if (city.empty()) {
            break;
        }

        // czy wprowadzono tylko litery
        bool isValid = true;
        for (char c : city) {
            if (!isalpha(c) && c != ' ') {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            cities[numCities] = city;
            numCities++;
        } else {
            cout << "Invalid city name. Enter a valid city name.\n";
        }
    }

    
    sort(cities, cities + numCities, compareCities);

    cout << "Sorted list of cities:\n";
    for (int i = 0; i < numCities; i++) {
        cout << cities[i] << endl;
    }

    for (int i = 0; i < numCities; i++) {
    
    }

    return 0;
}
