#include <iostream>
#include <string>
using namespace std;

int main() {
    int TestCases;
    cin >> TestCases;

    while (TestCases > 0) {
        TestCases = TestCases - 1;
        int NoTrips;
        cin >> NoTrips;

        string cities[100];
        int uniqueCount = 0;

        for (int i = 0; i < NoTrips; ++i) {
            string city;
            cin >> city;

            
            bool isUnique = true;
            for (int j = 0; j < uniqueCount; ++j) {
                if (cities[j] == city) {
                    isUnique = false;
                    break;
                }
            }

            if (isUnique) {
                cities[uniqueCount++] = city;
            }
        }

        cout << uniqueCount << endl;
    }

    return 0;
}