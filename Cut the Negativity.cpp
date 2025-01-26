#include <iostream>
using namespace std;

const int MAX_FLIGHTS = 10000;  

int main() {
    int n;
    cin >> n;

    int directFlights[MAX_FLIGHTS][3];  
    int flightCount = 0;

    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int cost;
            cin >> cost;
            if (cost != -1) {  
                directFlights[flightCount][0] = i;  
                directFlights[flightCount][1] = j;  
                directFlights[flightCount][2] = cost;  
                flightCount++;
            }
        }
    }

    
    for (int i = 0; i < flightCount - 1; ++i) {
        for (int j = i + 1; j < flightCount; ++j) {
            if (directFlights[i][0] > directFlights[j][0] ||
                (directFlights[i][0] == directFlights[j][0] && directFlights[i][1] > directFlights[j][1])) {
                
                int tempDeparture = directFlights[i][0];
                int tempArrival = directFlights[i][1];
                int tempCost = directFlights[i][2];

                directFlights[i][0] = directFlights[j][0];
                directFlights[i][1] = directFlights[j][1];
                directFlights[i][2] = directFlights[j][2];

                directFlights[j][0] = tempDeparture;
                directFlights[j][1] = tempArrival;
                directFlights[j][2] = tempCost;
            }
        }
    }

    
    cout << flightCount << endl;

    
    for (int i = 0; i < flightCount; ++i) {
        cout << directFlights[i][0] << " " << directFlights[i][1] << " " << directFlights[i][2] << endl;
    }

    return 0;
}
